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
void print_reverse(node *tail)
{
  node *flag = tail;
  while (flag != NULL)
  {
    cout << flag->val << " ";
    flag = flag->prev;
  }
  cout << endl;
}
int main()
{

  node *head = new node(10);
  node *a = new node(20);
  node *b = new node(30);
  node *tail = b;
  // connection
  head->next = a;
  a->next = b;
  a->prev = head;
  b->prev = a;
  print_normal(head);
  print_reverse(tail);
  return 0;
}
