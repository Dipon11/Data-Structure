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

  node *temp = head;

  // //Complicating Process
  //   cout << head->val << endl;                         // head
  //   cout << head->next->val << endl;                   // a
  //   cout << head->next->next->val << endl;             // b
  //   cout << head->next->next->next->val << endl;       // c
  //   cout << head->next->next->next->next->val << endl; // d

  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;

  temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }

  return 0;
}
