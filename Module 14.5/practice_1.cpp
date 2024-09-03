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
class myStack
{
public:
  node *head = NULL;
  node *tail = NULL;
  int sz = 0;

  void push(int val)
  {
    sz++;
    node *newNode = new node(val);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
  }
  void pop()
  {
    sz--;
    node *deleteNode = tail;
    tail = tail->prev;
    if (tail == NULL)
    {
      head = NULL;
    }
    else
    {
      tail->next = NULL;
    }
    delete deleteNode;
  }
  int top()
  {
    return tail->val;
  }
  int size()
  {
    return sz;
  }
  bool empty()
  {
    if (sz == 0)
      return true;
    else
      return false;
  }
};
int main()
{

  myStack st1;
  myStack st2;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st1.push(x);
  }
  int m;
  cin >> m;

  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    st2.push(x);
  }

  //  while (!st1.empty())
  //  {
  //     cout<< st1.top()  <<" ";
  //     st1.pop();

  //  }
  //   cout  <<endl;

  // while (!st2.empty())
  // {
  //   cout << st2.top() << " ";
  //   st2.pop();
  // }
  bool flag = false;
  while (!st1.empty() || !st2.empty())
  {
    //  cout<< st1.size() <<st2.size()  <<endl;
    
    if (st1.top() != st2.top())
    {

      flag = true;
      break;
    }
    else
    {
      // cout << st1.top() <<" "<< st2.top() << endl;
      flag = false;
      st1.pop();
      st2.pop();
    }
  }
  if (flag == true)
    cout << "NO" << endl;

  else
    cout << "YES" << endl;

  return 0;
}
