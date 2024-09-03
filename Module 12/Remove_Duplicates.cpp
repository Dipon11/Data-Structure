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
void insert(node *&head, node *&tail, int val)//0(N)
{
  node *newNode = new node(val);

  node *temp = head;
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;
}
void remove_dupli(node *head)//0(N2)
{
  for (node *i = head; i != NULL; i = i->next)
  {
    node *prev = i;
    for (node *j = i->next; j != NULL;)
    {
      if (i->val == j->val)
      {
        node *deleteNode = j;
        prev->next = j->next;
        j = j->next;
        delete deleteNode;
      }
      else
      {
        prev = j;
        j = j->next;
      }
    }
  }
}
void sort(node *head)//0(N2)
{
  for (node *i = head; i != NULL; i = i->next)
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

void print(node *head)// 0(n)
{
  node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}
int main()
{

  node *head = NULL;
  node *tail = NULL;
  while (true)
  {
    int val;
    cin >> val;

    if (val == -1)
      break;
    else
    {
      insert(head, tail, val);
    }
  }

  remove_dupli(head);
  sort(head);
  print(head);
  return 0;
}
