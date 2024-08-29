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
void print_reverse_recursion(node *n)
{
  // base case
  if (n == NULL)
    return;

  print_reverse_recursion(n->next);
  cout << n->val << " ";
}

void print(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}
void reveres_func(node *&head ,node *cur)
{
   if(cur->next ==NULL)
   {
    head=cur;
    return;
   }
  reveres_func(head,cur->next);
  cur->next->next=cur;
  cur->next=NULL;
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
 reveres_func(head,head);
 print(head);
  return 0;
}
