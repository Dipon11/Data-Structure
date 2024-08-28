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
void insert_at_tail(node *&head, int val)
{
  node *newNode = new node(val);
  if (head == NULL)
  {
    head = newNode;
    cout << "Inserted at head" << endl
         << endl;
    return;
  }
  node *temp = head;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  cout << "inserted at tail" << endl;
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
void print_reverse(node *n)
{

  if (n == NULL)
  {
    return;
  }

  print_reverse(n->next);
  cout << n->val << " ";
}
int main()
{
  node *head = NULL;
  while (true)
  {
    int val;
    cin >> val;
    if (val == -1)
    {
      break;
    }
    else
    {
      insert_at_tail(head, val);
    }
    {
    }
  }
  print(head);
  print_reverse(head);
  return 0;
}
