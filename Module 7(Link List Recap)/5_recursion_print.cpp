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

void print_foraward_recursion(node *n)
{
  // base case
  if (n == NULL)
    return;
  cout << n->val << " ";
  print_foraward_recursion(n->next);
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

  print_foraward_recursion(head);
  cout << endl;

  print_reverse_recursion(head);
  return 0;
}
