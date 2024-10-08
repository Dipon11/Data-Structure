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
void insert_at_pos(node *&head, int pos, int val)
{
  node *newNode = new node(val);

     if (pos == 0) // Special case for position 0
    {
        newNode->next = head;
        head = newNode;
        cout << "Inserted at head (position 0)" << endl;
        return;
    }
  node *temp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    temp = temp->next;
  }
  if (temp == NULL)
  {
    cout << "Innvalid INdex" << endl;
  }
  else
  {
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position" << pos << endl
         << endl;
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
  cout << endl;
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
  }
  print(head);
  int q;
  cin >> q;
  while (q--)
  {
    int pos, val;
    cin >> pos >> val;
   
    insert_at_pos(head, pos, val);
    print(head);
  }

  return 0;
}
