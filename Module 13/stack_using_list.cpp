#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
  list<int> l;
  void push(int val) // 0(1)
  {
    l.push_back(val);
  }
  void pop() // 0(1)
  {
    l.pop_back();
  }
  int top() // 0(1)
  {
    return l.back();
  }
  int size() // 0(1)
  {
    return l.size();
  }
  bool empty() // 0(1)
  {
    if (l.size() == 0)
      return true;
    else
      return false;
  }
};
int main()
{
  myStack st;
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
