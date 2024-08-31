#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
class node {
public:
    int val;
    node *next;
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to get the size of the linked list
int size(node *head) {
    node *temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to remove the nth node from the end of the list
node* removeNthFromEnd(node* head, int n) {
    int sz = size(head);
    int pos = sz - n;
    node *tmp = head;

    if (head == NULL) return head;

    if (pos == 0) {  // If the node to remove is the head
        node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return head;
    }
    
    // If n is greater than or equal to the size of the list, return the head
    if (n >= sz) {
        return head;
    }
    
    for (int i = 1; i < pos; i++) {  // Traverse to the node before the target
        tmp = tmp->next;
    }
    
    // Remove the nth node from the end
    node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;

    return head;
}

// Function to print the linked list
void print(node *head) {
    node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Creating a linked list with nodes 10 -> 20 -> 30 -> 40 -> 50
    node *head = new node(10);
    node *a = new node(20);
    
    head->next = a;
  ;
 
    
    // Print the initial linked list
    print(head);
    
    int n;
    cin >> n;  // The position from the end to remove
    
    // Remove the nth node from the end
    head = removeNthFromEnd(head, n);
    
    // Print the linked list after deletion
    print(head);

    return 0;
}
