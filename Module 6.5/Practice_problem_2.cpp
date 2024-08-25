#include <bits/stdc++.h>
using namespace std;
class node
{

public:
  int val;
  node *next;
  node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};
void insert_at_tail(node *&head, int val)
{
  node *newNode = new node(val);
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}
void print_link_list(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    // cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}
void find_duplicates(node *head) {
    node *ptr1 = head;
    bool found_duplicate = false;
    while (ptr1 != NULL && ptr1->next != NULL) {
        node *ptr2 = ptr1->next;
        while (ptr2 != NULL) {
            if (ptr1->val == ptr2->val) {
                cout << "Yes " << ptr1->val << endl;
                found_duplicate = true;
                break;
            }
            ptr2 = ptr2->next;
        }
        if (found_duplicate) break;
        ptr1 = ptr1->next;
    }
    if (!found_duplicate) {
        cout << "NO" << endl;
    }
}
int main()
{
  int val;
  node *head = NULL;
  while (true)
  {
    cin >> val;
    if (val == -1)
      break;
    insert_at_tail(head, val);
  }
  print_link_list(head);
find_duplicates(head);
  return 0;
}
