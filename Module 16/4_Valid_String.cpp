#include <bits/stdc++.h>
using namespace std;

int main()
{

  int qu;
  cin >> qu;

  // cout<< qu  <<endl;

  while (qu--)
  {
    stack<char> st;
    string s;
    cin >> s;

    for (char c : s)
    {
      if (st.empty())
      {
        st.push(c);
      }
      else if (!st.empty())
      {
        char prev = st.top();
        if (c == 'A' && prev == 'B')
        {
          st.pop();
        }
        else if (c == 'B' && prev == 'A')
        {
          st.pop();
        }
        else
        {
          st.push(c);
        }
      }
    }
    if (st.empty())
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
