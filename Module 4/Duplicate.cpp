#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
    {
      // cout << a[i] << " " << a[j] << endl;
      if (a[i] == a[j])
      {
        flag = true;
      }
    }
  }
  if (flag == false)
  {
    cout << "NO" << endl;
  }
  else
  {
    cout << "YES" << endl;
  }

  return 0;
}
