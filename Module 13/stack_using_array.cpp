#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
  vector<int> v;     // for n value 0(n)
  void push(int val) // 0(1)
  {
    v.push_back(val);
  }
  void pop() // 0(1)
  {
    v.pop_back();
  }
  int top() // 0(1)
  {
    return v.back();
  }
  int size() // 0(1)
  {
    return v.size();
  }
  bool empty() // 0(1)
  {
    if (v.size() == 0)
      return true;
    else
      return false;
  }
};
int main()
{

  myStack st;
  int n;
  cin>>n;
  for (int i = 0; i <n ; i++)
  {
    int x;
    cin>>x;
    st.push(x);
  }
 
  while (!st.empty())
  {
     cout<< st.top()  <<" ";
     st.pop();
    
  }
  
  return 0;
}
