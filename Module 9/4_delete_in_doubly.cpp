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
void insert_at_pos(node *head, int pos, int val) // 0(n)
{
  node *newNode = new node(val);
  node *temp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    temp = temp->next;
  }
  // cout << temp->val << endl;
  newNode->next = temp->next;    // new node er stahe porer node er con
  temp->next = newNode;          // prev node er sthae new node er connection
  newNode->next->prev = newNode; // porer node ae new node prev rakhsi

  newNode->prev = temp; // newnode er prev ager node rakhlm
}
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
int size(node *head) // 0(n)
{
  node *tmp = head;
  int cnt = 0;
  while (tmp != NULL)
  {
    cnt++;
    tmp = tmp->next;
  }
  return cnt;
}
void insert_at_head(node *&head, node *&tail, int val) // 0(1)
{
  node *newNode = new node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
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
void delete_node(node *head, int pos) // 0(n)
{
  node *temp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    temp = temp->next;
  }
  node *deleteNod = temp->next;
  temp->next = temp->next->next;
  temp->next->prev = temp;
  delete deleteNod;
}
void delete_tail(node *&tail) // 0(1)
{
  node *deleteNode = tail;
  tail = tail->prev;
  delete deleteNode;
  tail->next = NULL;
}
void delete_head(node *&head) // o(1)
{
  node *headnode = head;
  head = head->next;
  delete headnode;
  head->prev = NULL;
}
int main()
{

  node *head = new node(10);
  node *a = new node(20);
  node *b = new node(30);
  node *c = new node(40);
  node *tail = c;

  // connection
  head->next = a;
  a->next = b;
  a->prev = head;
  b->prev = a;
  b->next = c;
  c->prev = b;

  int pos;
  cin >> pos;
  if (pos >= size(head))
  {
    cout << "Invalid" << endl;
  }
  else if (pos == 0)
  {
    delete_head(head);
  }
  else if (pos == size(head) - 1)
  {
    delete_tail(tail);
  }
  else
  {
    delete_node(head, pos);
  }
  // // delete_node(head, pos);
  // delete_head(head);
  // // delete_tail(tail);
  print_normal(head);
  print_reverse(tail);

  return 0;
}
