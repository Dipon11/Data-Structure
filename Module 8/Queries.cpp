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

void insert_at_tail(node *&head, node *&tail, int val)
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
    tail = newNode;
  }
}

void insert_at_head(node *&head, node *&tail, int val)
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
    newNode->next = head;
    head = newNode;
  }
}

void print_head_and_tail(node *head, node *tail)
{

  cout << head->val << " " << tail->val << endl;
}

int main()
{
  node *head = NULL;
  node *tail = NULL;

  int q = 0;
  int pos, v;
  cin >> q;
  while (q--)
  {

    cin >> pos >> v;
    if (pos == 0)
    {
      insert_at_head(head, tail, v);
    }
    else
    {
      insert_at_tail(head, tail, v);
    }
    print_head_and_tail(head, tail);
  }

  return 0;
}
