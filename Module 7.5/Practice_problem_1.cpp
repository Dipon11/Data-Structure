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

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  cout << "inserted at tail" << endl;

}
// int size(node *head)
// {
//   node *temp = head;
//   int count = 0;
//   while (temp != NULL)
//   {
//     count++;
//     temp = temp->next;
//   }
//   return count;
// }
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

  cout << "How Many Link List " << endl;
  int q = 0;
  cin >> q;
  while (q--)
  {
    int val;
    cin >> val;
    while (true)
    {
      cin >> val;
      if (val == -1)
      {
        break;
      }
      insert_at_tail(head, val);
    }
    print(head);
  }
  print(head);

  return 0;
}
