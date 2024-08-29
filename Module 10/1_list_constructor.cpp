#include <bits/stdc++.h>
using namespace std;

int main()
{

  // list<int> myList;
  // list<int>list2 ={1,2,3,4,5};
  // int a[5]={1,2,3,4,5};
  vector<int> v = {10, 20, 30, 40, 50};

  // list<int> myList(10, 5);
  // list<int>mylist(a,a+5);
  //  cout << myList.size() << endl;
  //  cout << myList.front() << endl;

  list<int> mylist(v.begin(), v.end());

  // for (auto it = mylist.begin(); it != mylist.end(); it++)
  // {
  //   cout << *it << " ";
  // }

  for (int val : mylist)
  {
    cout << val << " ";
  }

  return 0;
}
