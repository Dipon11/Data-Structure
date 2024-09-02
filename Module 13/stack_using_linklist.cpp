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
  void push(int val) // 0(1)
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
    tail = tail->next;
  }
  void pop() // 0(1)
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
  int top() // 0(1)
  {
    return tail->val;
  }
  int size() // 0(1)
  {
    return sz;
  }
  bool empty() // 0(1)
  {
    if (sz == 0)
      return true;
    else
      return false;
  }
};
int main()
{
  myStack st;
//   st.pop();
// cout<< st.top()  <<endl;
  
int n;
cin >> n;
for (int i = 0; i < n; i++)
{
  int x;
  cin >> x;
  st.push(x);
}
while (!st.empty())
{
  cout << st.top() << " ";
  st.pop();
}

return 0;
}
