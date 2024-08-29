#include <bits/stdc++.h>
using namespace std;

int main()
{

  list<int> list1 = {1, 2, 4,5,5,5,5,1,2, 5, 3, 7, 6};
  // list1.remove(10);
  list<int> list2 = {1, 3, 4};
  // list1.insert(next(list1.begin(),1),list2.begin(),list2.end());
//   list1.sort();
//   // for (int val : list1)
//   // {
//   //   cout << val << " "; // ascending order
//   // }
//   // cout << endl;

//   // list1.sort(greater<int>());
// list1.unique();

// list1.reverse();
  for (int val : list1)
  {
    cout << val << " "; // descending order
  }
  return 0;
}
