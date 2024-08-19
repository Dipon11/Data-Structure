#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
  //Total complexity O(NlogN)
  
    for (int i = 1; i <=n; i++) //O(n)
    {
        int x = i;
        while (x > 0) //O(logN)
        {
            int digit = x % 10;
            cout << digit << endl;
            x /= 10;
        }
        cout << endl;
    }

    return 0;
}
