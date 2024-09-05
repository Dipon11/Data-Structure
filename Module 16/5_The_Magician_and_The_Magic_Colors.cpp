#include <bits/stdc++.h>
using namespace std;

string processColors(const string &x)
{
  stack<char> st;

  for (char ch : x)
  {
    if (st.empty())
    {
      st.push(ch);
    }
    else
    {
      char prev = st.top();

      if (ch == prev)
      {
        st.pop();
      }
      else if ((ch == 'R' && prev == 'G') || (ch == 'G' && prev == 'R'))
      {
        st.pop();
        st.push('Y');
      }
      else if ((ch == 'R' && prev == 'B') || (ch == 'B' && prev == 'R'))
      {
        st.pop();
        st.push('P');
      }
      else if ((ch == 'B' && prev == 'G') || (ch == 'G' && prev == 'B'))
      {
        st.pop();
        st.push('C');
      }
      else
      {
        st.push(ch);
      }
    }
  }

  string result = "";
  while (!st.empty())
  {
    result += st.top();
    st.pop();
  }

  reverse(result.begin(), result.end());

  return result;
}

int main()
{
  int T;
  cin >> T;

  while (T--)
  {
    int N;
    cin >> N;

    string colors;
    cin >> colors;

    string finalColors = processColors(colors);
    cout << finalColors << endl;
  }

  return 0;
}
