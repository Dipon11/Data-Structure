#include<bits/stdc++.h>
using namespace std;
class node
{

public:
  int val;
  node *next;
  node *prev;
  node(int val)
  {
    this->val=val;
    this->next=NULL;
    this->prev=NULL;
  }
};
int main(){
     node*head= new node(10);
      node*a= new node(20);
       node*b= new node(30);
     
    //connection



    return 0;
}
