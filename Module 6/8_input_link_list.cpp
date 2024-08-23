#include<bits/stdc++.h>
using namespace std;
class node
{

public:
  int val;
  node *next;
  node(int val)
  {
    this->val=val;
    this->next=NULL;
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
  
}
void print_link_list(node *head)
{
  cout << endl;
  cout << "Your Link list" << endl;
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}
int main(){
     int val;
     node *head=NULL;
     while (true)
     {
      cin>>val;
      if(val==-1)break;
      insert_at_tail(head,val);
     }
     
     print_link_list(head);
    

    return 0;
}
