#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> myList;

  // Read values from input
  while (true)
  {
    int val;
    cin >> val;

    if (val == -1)
      break;
    else
      myList.push_back(val);
  }

  myList.sort();
  myList.unique(); // has to be sorted

  for (int val : myList)
  {
    cout << val << " ";
  }

  return 0;
}
