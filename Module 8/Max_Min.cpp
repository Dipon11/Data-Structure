// // You need to take a singly linked list of
// integer value as input and print
//  the maximum and minimum value of the singly linked list.

// Note: You must use singly l
// inked list, otherwise you will not get marks.

// Input Format

// Input will contain the values of
//  the singly linked list, and will terminate with -1.

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
void insert(node *&head, int val)
{
  node *newNode = new node(val);
  if (head == NULL)
  {
    head = newNode;
    //cout << "Inserted at Head" << endl;
    return;
  }
  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  //cout << "inserted at tail" << endl;
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
void max_min(node *head)
{
  node *temp = head;
  int max = temp->val;
  int min = temp->val;
  while (temp != NULL)
  {
    if (temp->val > max)
    {
      max = temp->val;
    }

    else if (temp->val < min)

    {
      min = temp->val;
    }
    temp = temp->next;
  }
  cout << max << " " << min << endl;
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
      insert(head, val);
    }
  }
  //print(head);
  max_min(head);
  return 0;
}
