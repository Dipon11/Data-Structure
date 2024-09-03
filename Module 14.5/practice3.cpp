#include <bits/stdc++.h>
using namespace std;

int main()
{

  stack<int> st;
  stack<int> st1;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }
  // while (!st.empty())
  // {
  //   cout << st.top() << " ";
  //   st.pop();
  // }

  while (!st.empty())

  {
    int x;
    x = st.top();
    st1.push(x);
    st.pop();
  }
  while (!st1.empty())

  {
    cout << st1.top() << " ";
    st1.pop();
  }

  return 0;
}
