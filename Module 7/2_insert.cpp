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
void insert(node *head, int pos, int val) // )(N)
{
  node *newNode = new node(val);
  node *temp = head;
  for (int i = 1; i <= pos - 1; i++) // 0(N)
  {
    temp = temp->next;
  }
  cout << temp->val << endl;
  newNode->next = temp->next;
  temp->next = newNode;
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
void insert_head(node *&head, int val) // 0(1)
{
  node *newNode = new node(val);
  newNode->next = head;
  head = newNode;
}
int size(node *head) // 0(n)
{
  node *temp = head;
  int count = 0;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}
void insert_tail(node *&head, node *&tail, int val)
{
  node *newNode = new node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;
}
int main()
{

  node *head = new node(10);
  node *a = new node(20);
  node *b = new node(30);
  node *c = new node(40);
  node *d = new node(50);
  node *tail = d;
  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  print(head);
  cout << "tail" << tail->val << endl;

  int pos, val;
  cin >> pos >> val;
  if (pos > size(head))
  {
    cout << "invlaid index" << endl;
  }
  else if (pos == 0)
  {
    insert_head(head, val);
  }
  else if (pos == size(head))
  {
    insert_tail(head, tail, val);
  }
  else
  {
    insert(head, pos, val);
  }
  print(head);
  cout << "Tail" << " " << tail->val << endl;

  // cout << a->val << " " << b->val << endl;
  // cout << a->next->val << endl;

  return 0;
}
