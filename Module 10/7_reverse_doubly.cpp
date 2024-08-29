#include <bits/stdc++.h>
using namespace std;
class node
{

public:
  int val;
  node *next;
  node *prev;
  node(int val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};
void print_normal(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}

void reverse(node *head, node *tail)
{
  node *i = head;
  node *j = tail;

  while (i != j && i->next != j)
  {
    swap(i->val, j->val);
    i = i->next;
    j = j->prev;
  }
}
int main()
{

  node *head = new node(10);
  node *a = new node(20);
  node *b = new node(30);
  node *c = new node(40);
  node *d = new node(50);
  node *tail = d;
  // connection
  head->next = a;
  a->next = b;
  a->prev = head;
  b->prev = a;
  b->next = c;
  c->next = d;
  c->prev = b;
  d->prev = c;
  reverse(head, tail);
  print_normal(head);

  return 0;
}
