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

void print(node *head) // works perfect
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
}
void insert_at_head(node *&head, int val) // works perfect
{
  node *newNode = new node(val);
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}
void insert_at_pos(node *&head, node *&tail, int pos, int val)
{
  node *newNode = new node(val);
  node *temp = head;
  if (head == NULL)
  {
    cout << "Invalid" << endl;
    return;
  }

  for (int i = 1; i <=pos - 1; i++)
  {
    if (temp->next != NULL)
    {
      temp = temp->next;
       cout<< temp->val  <<endl;
      
    }
    else
    {
      cout << " Invalid" << endl;
      break;
    }
  }
while (temp->next!=NULL)
{
  newNode->next = temp->next;
  temp->next = newNode;
  newNode->next->prev = newNode;
  temp->prev = newNode;
}

  
}
// void insert_at_pos(node *&head, node *&tail, int pos, int val)
// {
//   node *newNode = new node(val);

//   if (pos == 0) // Special case: Insert at the head
//   {
//     insert_at_head(head, val);
//     return;
//   }

//   node *temp = head;

//   // Traverse to the position just before where the new node will be inserted
//   for (int i = 1; i < pos; i++)
//   {
//     if (temp->next != NULL)
//     {
//       temp = temp->next;
//     }
//     else
//     {
//       cout << "Invalid position" << endl;
//       return; // Exit the function if position is invalid
//     }
//   }

//   // Adjust the pointers to insert the new node
//   newNode->next = temp->next;
//   if (temp->next != NULL)
//   {
//     temp->next->prev = newNode;
//   }
//   else
//   {
//     tail = newNode; // Update tail if inserting at the end
//   }
//   temp->next = newNode;
//   newNode->prev = temp;
// }

int main()
{

  node *head = NULL;
  node *tail = NULL;
  int q=0;
  cin >> q;
  int val, pos;
  while (q--)
  {

    cin >> pos >> val;
    // cout << pos << " " << val << endl;

   
    if (pos == 0)
    {
      insert_at_head(head, val);
    }
    else if (pos > 0)
    {
      insert_at_pos(head, tail, pos, val);
    }
    else{
       cout<< "Invalid position"  <<endl;
      
    }
  }
  print(head);
  // print_reverse(tail);
  return 0;
}
