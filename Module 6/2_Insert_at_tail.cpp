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
    return;
  }
  node *temp = head;//head nilm temp ae
  while (temp->next != NULL) //insert at tail
  {
    temp = temp->next;//temp akhon last node keh point kortese
  }
  temp->next = newNode;//notun node tail ae dhuktese
}
void print_link_list(node *head)
{
  cout << "Your Link list" << endl;

  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << endl;
    temp = temp->next;
  }
  cout << endl;
}
int main()
{

  node *head = NULL;

  while (true)
  {
    cout << "Option 1: Insert at tail" << endl;
    cout << "Option 2: Print Link List" << endl;
    cout << "Option 3:Terminate" << endl;

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
      break;
    }
  }
  print_link_list(head);
  return 0;
}
