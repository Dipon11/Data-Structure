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
  int count;
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
int sizeof_linklist(node *head)
{
  int count = 0;
  node *temp = head;
  while (temp != NULL)

  {
    count++;
    temp = temp->next;
    // cout << count << endl;
  }
  return count;
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
    print(head);
  }
  print(head);
  int size = sizeof_linklist(head);
  for (node *i = head; i->next != NULL; i = i->next)
  {
    for (node *j = i->next; j != NULL; j = j->next)
    {
      // cout << i->val << " " << j->val << endl;
      if (i->val > j->val)
      {
        swap(i->val, j->val);
      }
      cout << endl;
    }
  }
  print(head);
  return 0;
}