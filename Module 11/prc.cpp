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
  node *temp = head;         // head nilm temp ae
  while (temp->next != NULL) // insert at tail
  {
    temp = temp->next; // temp akhon last node keh point kortese
  }
  temp->next = newNode; // notun node tail ae dhuktese
}
void insert_at_tail2(node *&head1, int val1)
{
  node *newNode = new node(val1);

  if (head1 == NULL)
  {
    head1 = newNode;
    return;
  }
  node *temp = head1;        // head nilm temp ae
  while (temp->next != NULL) // insert at tail
  {
    temp = temp->next; // temp akhon last node keh point kortese
  }
  temp->next = newNode; // notun node tail ae dhuktese
}
void print(node *head1)
{
  if (head1 == NULL)
  {
    cout << "empty" << endl;
    return;
  }
  node *temp = head1;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}
void merge(node *head, node *&head1)
{
  if (head == NULL)
    return;
  node *temp = head->next;
  int sum = 0;

  while (temp != NULL)
  {

    if (temp->val != 0)
    {
      sum += temp->val;
      cout << sum << endl;
    }
    else
    {
      if (sum != 0)
      {
        insert_at_tail2(head1, sum);
        cout << sum << endl;
      }
      sum = 0; // resest the sum
    }
    temp = temp->next;
  }
}
int main()
{
  node *head = NULL;
  node *head1 = NULL;
  while (true)
  {
    int val;
    cin >> val;

    if (val == -1)
      break;
    else
    {
      insert_at_tail(head, val);
    }
  }
  merge(head, head1);
  print(head1);

  return 0;
}
