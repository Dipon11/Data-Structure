#include <bits/stdc++.h>
using namespace std;

int main()
{

   int qu;
  cin >> qu;

  queue<string> q;
  // cout<< qu  <<endl;

  for (int i = 0; i < qu; i++)

  {

     int x;
    cin >> x;

    if (x == 0)
    {
      string y;
      cin >> y;
      q.push(y);
    }
    else if (x == 1)
    {

      if (q.empty())
      {
        cout << "Invalid" << endl;
      }
      else
      {
        cout << q.front() << endl;
        q.pop();
      }
    }
  }

  return 0;
}
