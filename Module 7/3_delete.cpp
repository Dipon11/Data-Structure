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
void delete_node(node *head, int pos)//0(n)
{
  node *temp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    temp = temp->next;
  }
  node *deleteNode = temp->next;
  temp->next = temp->next->next;
  delete deleteNode;
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
void delete_head (node *&head)//0(1)
{
  node *deleteNode=head;
  head=head->next;
delete deleteNode;
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
  print(head);
  int pos;
  cin >> pos;
  if (pos >= size(head))
  {
    cout << "Invalid" << endl;
  }
  else if(pos==0)
  {
    delete_head(head);
  }
  else
  {
    delete_node(head, pos);
  }
  print(head);

  return 0;
}
