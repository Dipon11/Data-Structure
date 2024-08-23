#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;//type 1
    // vector<int> v(5)//type 2
    // vector<int> v(5, 4);//type3
    // vector<int> v2(5,100);
    // vector<int> v(v2); type 4 copy from v2
    // int a[9] = {1, 2, 3, 4, 5, 6, 7};
    // vector<int> v(a, a + 6); copy from array
    vector<int> v = {2, 4, 5, 7, 3};

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        /* code */
    }

    return 0;
}
