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

  // b->next = c;
  // c->next = NULL;

  node *slow = head;
  node *fast = head;
  bool flag = false;
  while (fast != NULL && fast->next != NULL)

  {
    slow = slow->next;
    fast = fast->next->next;
    if (fast == slow)
    {
      flag = true;
      break;
    }
  }
  if (flag == true)
  {
    cout << "Cycle Detectted" << endl;
  }
  else if(flag==false)
  {
    cout << "Cycle Not Found " << endl;
  }
  return 0;
}
