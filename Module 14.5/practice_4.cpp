#include <bits/stdc++.h>
using namespace std;

int main()
{

  queue<int> q;
  stack<int> st1;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    q.push(x);
  }
//  while (!q.empty())

//   {
//      cout<< q.front()  <<" ";
//     q.pop();
//   }
   
   while (!q.empty())
   {
     int x=q.front();
     st1.push(x);
     q.pop();
   }

    while (!st1.empty())

  {
     cout<< st1.top()  <<" ";
    st1.pop();
  }


  return 0;
}
