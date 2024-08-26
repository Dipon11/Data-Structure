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
    // cout << "Inserted at Head" << endl;
    return;
  }
  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  // cout << "inserted at tail" << endl;
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
void same_or_not(node *head, node *head2)
{
  // bool flag = false;
  // for (node *i = head; i != NULL; i = i->next)
  // {
  //   for (node *j = head2; j != NULL; j = j->next)
  //   {
  //     if (i->val == j->val)
  //     {
  //       flag = true;
  //     }
  //     else
  //     {
  //       flag = false;
  //     }
  //   }
  // }
  // if (flag == true)
    node *temp1 = head;
    node *temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            cout << "NO" << endl;
            return;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

  
    if (temp1 == NULL && temp2 == NULL)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main(){
  node *head = NULL;
  node *head2 = NULL;

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
  while (true)
  {
    int val2;
    cin >> val2;
    if (val2 == -1)
    {
      break;
    }
    else
    {
      insert(head2, val2);
    }
  }
 
  same_or_not(head, head2);
  return 0;
}
