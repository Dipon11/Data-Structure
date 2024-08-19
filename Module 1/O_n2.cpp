#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) // O(Nsquare)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "Helllo" << endl;
        }
    }
    for (int i = 0; i <=n; i++) // o(N sqaure)

    {
        for (int j = i + 1; j <=n; j++)
        {
            cout << "jello" << endl;
        }
    }

    return 0;
}
