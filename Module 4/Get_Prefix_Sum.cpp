#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  long long int a[n];
  long long int pre[n+1];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    // cout << a[i] << " ";
  }
  // cout << endl;

  pre[0] = a[0];
  for (int i = 1; i < n ; i++)
  {
    // cout << "a" << a[i] << " " << "p" << pre[i - 1] << endl;

    pre[i] = pre[i - 1] + a[i];
    // cout << "r" << pre[i] << " ";
  }
  cout << endl;

  for (int i = n-1; i >=0 ; i--)
  {
    cout <<pre[i] << " ";
  }

  return 0;
}
