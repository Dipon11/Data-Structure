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
void insert(node *&head, node *&tail, int val)
{
  node *newNode = new node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  else
  {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
}

void print(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
}
void print_reverse(node *tail)
{
  node *temp = tail;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->prev;
  }
}
void sort(node *head)
{
  for (node *i = head; i->next != NULL; i = i->next)
  {
    for (node *j = i->next; j != NULL; j = j->next)
    {
  
      if (i->val > j->val)
      {
        swap(i->val, j->val);
      }
    }
  }
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
    else
    {
      insert(head, tail, val);
    }
  }
  sort(head);
  print(head);
  // print_reverse(tail);

  return 0;
}
