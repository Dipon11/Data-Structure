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
void insert_at_pos(node *&head, int pos, int val)
{

  node *newNode = new node(val);
  if (pos == 0)
  {
    newNode->next = head;
    head = newNode;
    return;
  }
  node *temp = head;
  for (int i = 0; i <= pos - 1; i++)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}
void print(node *head)
{
  node *temp = head;
  int count = 0;

  while (temp != NULL)
  {
    count++;
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << count << endl;
  cout << endl;
}

int main()
{
  node *head = NULL;
  node *tail = NULL;

  int q = 0;
  cin >> q;
  while (q--)
  {

    int pos, v;
    cin >> pos;
    cin >> v;
    insert_at_pos(head, pos, v);
  }
  print(head);

  return 0;
}
