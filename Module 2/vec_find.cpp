#include<bits/stdc++.h>
using namespace std;

int main()
     
{
vector<int> v = {1, 2, 3, 4, 5, 6, 7, 2, 1, 2, 3, 4, 2, 2, 14, 52, 2, 2};

 
  auto it=find(v.begin(),v.end(),27);
if(it == v.end())
{
   cout<< "Not found"  <<endl;
  
}
else{
   cout<< "Found"  <<endl;
  
}
 } // for (int x : v) // shortcut for extractig value
  //   {
    
  //   }
  //   // return 0;

