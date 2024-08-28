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

void print_normal(node *head) // 0(n)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}
void print_reverse(node *tail) // 0(n)
{
  node *flag = tail;
  while (flag != NULL)
  {
    cout << flag->val << " ";
    flag = flag->prev;
  }
  cout << endl;
}

void insert_at_tail(node *&head, node *&tail, int val) // 0(1)
{
  node *newNode = new node(val);
  if (tail == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = tail->next;
}

int main()
{

  node *head = NULL;
  node *tail = NULL;
  int val;
  while (true)
  {
    cin >> val;
    if (val == -1)
      break;
    insert_at_tail(head, tail, val);
  }
  print_normal(head);
  print_reverse(tail);

  return 0;
}
