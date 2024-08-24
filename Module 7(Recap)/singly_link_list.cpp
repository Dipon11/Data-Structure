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
void print(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
}
int main()
{

  node *head = new node(10);
  node *a = new node(20);
  node *b = new node(30);
  node *c = new node(40);
  node *d = new node(50);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;

  // cout << a->val << " " << b->val << endl;
  // cout << a->next->val << endl;
  print(head);
  return 0;
}
