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
void insert(node *&head, node *&tail, int val)
{
  node *newNode = new node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
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
void find_dupli(node *head1, node *head2)
{
    node *temp = head1;
    node *tmp = head2;
    
    while (temp != NULL && tmp != NULL)
    {
        if (temp->val != tmp->val)
        {
            cout << "NO" << endl;
            return;
        }
        temp = temp->next;
        tmp = tmp->next;
    }

    if (temp != NULL || tmp != NULL)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
  
int main()
{
  node *head1 = NULL;
  node *tail1 = NULL;
  node *head2 = NULL;
  node *tail2 = NULL;

  bool secondList = false; // flag to switch between lists
  int val;

  while (cin >> val)
  {
    if (val == -1)
    {
      if (secondList)
        break;           // exit on the second -1
      secondList = true; // switch to the second list
      continue;
    }

    if (!secondList)
    {
      insert(head1, tail1, val); // insert into first list
    }
    else
    {
      insert(head2, tail2, val); // insert into second list
    }
  }

  // Print both lists
  cout << "First List: ";
  print(head1);
  cout << "Second List: ";
  print(head2);
  find_dupli(head1, head2);

  return 0;
}