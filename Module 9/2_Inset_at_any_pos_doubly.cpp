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
void insert_at_pos(node *head, int pos, int val)
{
  node *newNode = new node(val);
  node *temp = head;
  for (int i = 1; i <=pos - 1; i++)
  {
    temp = temp->next;
  }
  //cout << temp->val << endl;
  newNode->next=temp->next; //new node er stahe porer node er con
  temp->next=newNode;//prev node er sthae new node er connection
  newNode->next->prev=newNode;// porer node ae new node prev rakhsi

  newNode->prev=temp;//newnode er prev ager node rakhlm

}
void print_normal(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}
void print_reverse(node *tail)
{
  node *flag = tail;
  while (flag != NULL)
  {
    cout << flag->val << " ";
    flag = flag->prev;
  }
  cout << endl;
}

int main()
{

  node *head = new node(10);
  node *a = new node(20);
  node *b = new node(30);
  node *c = new node(40);
  node *tail = c;
  
  // connection
  head->next = a;
  a->next = b;
  a->prev = head;
  b->prev = a;
  b->next = c;

  c->prev = b;
 
  insert_at_pos(head, 2, 100);
   print_normal(head);
  print_reverse(tail);
  return 0;
}
