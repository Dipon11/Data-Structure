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
  node *temp = head;         // head nilm temp ae
  while (temp->next != NULL) // insert at tail
  {
    temp = temp->next; // temp akhon last node keh point kortese
  }
  temp->next = newNode; // notun node tail ae dhuktese
  cout << "Inserted at tail" << endl
       << endl;
}
void insert_at_pos(node *head, int pos, int val)
{
  node *newNode = new node(val);
  node *temp = head;
  for (int i = 0; i < pos - 1; i++)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
  cout << endl
       << endl
       << "Inserted at position" << pos << endl
       << endl;
}
void print_link_list(node *head)
{
  cout << endl;

  cout << "Your Link list" << endl;

  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << endl;
    temp = temp->next;
  }
  cout << endl
       << endl;
}
void insert_at_head(node *&head, int val)
{
  node *newNode = new node(val);
  newNode->next = head;
  head = newNode;
  cout << endl
       << "Inserted at head" << endl;
}
int main()
{

  node *head = NULL;

  while (true)
  {
    cout << "Option 1: Insert at tail" << endl;
    cout << "Option 2: Print Link List" << endl;
    cout << "Option 3: Insert at any position " << endl;
    cout << "Option 4: Insert at head " << endl;
    cout << "Option 5:Terminate" << endl;

    int op;
    cin >> op;
    if (op == 1)
    {
      cout << "Please enter value" << endl;

      int v;
      cin >> v;
      insert_at_tail(head, v);
    }
    else if (op == 2)
    {
      print_link_list(head);
    }
    else if (op == 3)
    {
      int pos, v;
      cout << "Enter position :" << endl;
      cin >> pos;

      cout << "Enter Value :" << endl;
      cin >> v;
      if (pos == 0)
      {
        insert_at_head(head, v);
      }
      else
      {
        insert_at_pos(head, pos, v);
      }
    }
    else if (op == 4)
    {
      int v;
       cout<< "Enter a value"  <<endl;
      cin>>v;

      insert_at_head(head, v);
    }
    else if (op == 5)
    {
      break;
    }
  }
  print_link_list(head);
  return 0;
}
