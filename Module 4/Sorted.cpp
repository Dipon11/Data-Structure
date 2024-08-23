#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    
    //  cout<< t  <<endl;
    
  while (t--)
  { 
    int n;
     cin>>n;
    //  cout<< n  <<endl;
    
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      //cout << a[i] << " ";
    }
    //cout << endl;

    bool flag = false;
    for (int i = 0; i < n-1; i++)
    {
      // cout<< a[i]<<" "<<a[i+1]<<" "  <<endl;
      
      if (a[i] > a[i + 1])

      {
        flag = true;
        break;
      }
    }
    if (flag == true)
      cout <<"NO" << endl;
    else
      cout << "YES" << endl;
  }

  return 0;
}
