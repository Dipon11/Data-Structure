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
void insert_tail(node *&head, node *&tail, int val)
{
  node *newNode = new node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
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
int main(){
   node *head =NULL;   \
    node *tail =NULL;    
   int val;
   while(true)
   {
    cin>>val;
    if(val==-1)
    {
      break;

    }
    insert_tail(head,tail,val);
    
   }
     
    print(head);

    return 0;
}

