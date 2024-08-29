#include <bits/stdc++.h>
using namespace std;

int main()
{

  list<int> list1 = {1, 2, 3, 3, 3, 3, 3, 3, 3, 4, 5, 6, 7, 8, 9};
  list<int> list2 = {1, 3, 4};
  vector<int> v = {10, 20, 30, 40};

  // list<int> newList;

  // //newList=myList;
  // newList.assign(myList.begin(),myList.end());

  // myList.push_back(100);  // tail ae 100 insert hoise
  // myList.push_front(100); // head ae 100 insert hoise
  // myList.pop_back();      // delete the tail
  // myList.pop_front();     // delete the head

  // myList.insert(next(myList.begin(), 3), 100); // 0(n)
  // myList.erase(next(myList.begin(),2));
  // list1.insert(next(list1.begin(),1),list2.begin(),list2.end());
  // list1.erase(next(list1.begin(), 2), next(list1.begin(), 5));

  // replace(list1.begin(),list1.end(),3,0);

  // for (int val : list1)
  // {
  //   cout << val << " ";
  // }

  auto it = find(list1.begin(), list1.end(), 11);

  if (it == list1.end())
  {
    cout << "Not found" << endl;
  }
  else
  {
    cout << "found" << endl;
  }

  return 0;
}
