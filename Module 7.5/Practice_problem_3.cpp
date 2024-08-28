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
void print_link_list(node *head)
{
  cout << endl;
  cout << "Your Link list" << endl;
  node *temp = head;
  int count = 0;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    count++;
    temp = temp->next;
  }
  cout << endl;

  cout << count << endl;
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
void mid_point(node *head, int val)
{
  int x = ceil(val  / 2);
  cout << "Midpoint: " << x << endl;
  node *temp=head;
  if (val % 2 > 0)
  {
    for (int i = 1; i <= x - 1; i++)
    {
      temp = temp->next;

    }
     cout<< temp->val  <<endl;
    
  }
  else if(val % 2 == 0)
  {
      for (int i = 1; i <= x - 1; i++)
    {
      temp = temp->next;

    }
     cout<< temp->val  <<" "<<temp->next->val<<endl;
  }
}
int main()
{
  int val;
  node *head = NULL;
  while (true)
  {
    cin >> val;
    if (val == -1)
      break;
    insert_at_tail(head, val);
  }

  print_link_list(head);
  int count = sizeof_linklist(head);
  cout << "Size of the linked list: " << count << endl;

  mid_point(head, count);
  return 0;
}
