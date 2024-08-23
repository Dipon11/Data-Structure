#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* next;
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(node*& head, int val) {
    node* newNode = new node(val);
    if (head == NULL) {
        head = newNode;
        cout << "Inserted at head" << endl << endl;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << "Inserted at tail" << endl << endl;
}

void insert_at_pos(node* head, int pos, int val) {
    node* newNode = new node(val);
    node* temp = head;
    for (int i = 1; i <= pos - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl << "Inserted at position " << pos << endl << endl;
}

void print_link_list(node* head) {
    cout << endl;
    cout << "Your Link list" << endl;
    node* temp = head;
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_head(node*& head, int val) {
    node* newNode = new node(val);
    newNode->next = head;
    head = newNode;
    cout << endl << "Inserted at head" << endl;
}

void delete_from_pos(node* head, int pos) {
    node* temp = head;
    for (int i = 1; i <= pos - 1; i++) {
        temp = temp->next;
    }
    node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << endl << "Deleted from position " << pos << endl;
}

void delete_head(node*& head) {
    node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl << "Head deleted" << endl;
}

int main() {
    node* head = NULL;

    while (true) {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print Link List" << endl;
        cout << "Option 3: Insert at any position " << endl;
        cout << "Option 4: Insert at head " << endl;
        cout << "Option 5: Delete at pos " << endl;
        cout << "Option 6: Delete Head" << endl;
        cout << "Option 7: Terminate" << endl;

        int op;
        cin >> op;
        if (op == 1) {
            cout << "Please enter value" << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2) {
            print_link_list(head);
        }
        else if (op == 3) {
            int pos, v;
            cout << "Enter position :" << endl;
            cin >> pos;
            cout << "Enter Value :" << endl;
            cin >> v;
            if (pos == 0) {
                insert_at_head(head, v);
            }
            else {
                insert_at_pos(head, pos, v);
            }
        }
        else if (op == 4) {
            int v;
            cout << "Enter a value" << endl;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5) {
            int pos;
            cout << "Enter a position" << endl;
            cin >> pos;
            if (pos == 0) {
                delete_head(head);
            }
            else {
                delete_from_pos(head, pos);
            }
        }
        else if (op == 6) {
            delete_head(head);
        }
        else if (op == 7) {
            break;
        }
    }
    print_link_list(head);
    return 0;
}
