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

class mystack
{
public:
  node *head = NULL;
  int sz = 0;

  int getSize()
  {
    return sz;
  }

  bool isEmpty()
  {
    return sz == 0;
  }

  void push(int data)
  {
    node *newNode = new node(data);
    newNode->next = head;
    head = newNode;
    sz++;
  }

  void pop()
  {
    if (head == NULL)
    {
      return;
    }
    node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    sz--;
  }

  int getTop()
  {
    if (isEmpty())
    {
      return -1; // Stack is empty
    }
    return head->val;
  }
};

class myQueue
{
public:
  node *head = NULL;
  node *tail = NULL;
  int sz = 0;

  int getSize()
  {
    return sz;
  }

  bool isEmpty()
  {
    return sz == 0;
  }

  void push(int data)
  {
    node *newNode = new node(data);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
    sz++;
  }

  void pop()
  {
    if (head == NULL)
    {
      return;
    }
    node *deleteNode = head;
    head = head->next;
    if (head == NULL)
    {
      tail = NULL;
    }
    delete deleteNode;
    sz--;
  }

  int front()
  {
    if (isEmpty())
    {
      return -1;
    }
    return head->val;
  }
};

int main()
{
  mystack st;
  myQueue q;

  int n, m;
  cin >> n >> m;

  // Input for stack
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }

  // Input for queue
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    q.push(x);
  }

  list<int> l1;
  list<int> l2;
  while (!st.isEmpty())
  {
    l1.push_front(st.getTop());
    st.pop();
  }

  while (!q.isEmpty())
  {
    l2.push_back(q.front());
    q.pop();
  }

  bool flag=false;
  while (!l1.empty() || !l2.empty())
  {
     //cout<< l1.back()<< " " <<l2.front()  <<endl;
    
     if(l1.back() != l2.front()) 
     {
     flag=true;
     break;
     }
     else{
     l1.pop_back();
     l2.pop_front();
    
     }
  }
   if(flag ==true)  cout<< "NO"  <<endl;
   else  cout<< "YES"  <<endl;
   
  return 0;
}
