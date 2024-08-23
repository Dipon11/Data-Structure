#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  vector<int> v2(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v2[i];
  }

  // for (int val : v)
  // {
  //   cout << val << " ";
  // }
  // cout << endl;

  // for (int val : v2)
  // {
  //   cout << val << " ";
  // }
  int j = n * 2;
  vector<int> v3;

  v3.insert(v3.begin(), v2.begin(), v2.end());
  v3.insert(v3.end(),v.begin(),v.end());
  for (int val : v3)
  {
    cout << val << " ";
  }

  return 0;
}
