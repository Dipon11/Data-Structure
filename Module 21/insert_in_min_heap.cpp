#include<bits/stdc++.h>
using namespace std;

int main(){
     
    vector<int>v ;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin>>x;
      v.push_back(x);
      int curr =v.size()-1;
     while(curr != 0)
    {
       int parent =(curr -1)/2;
        if(v[parent] > v[curr] )
    
      swap(v[parent] , v[curr]);
      else
       break;
      curr=parent;
    
    }
    }
    

    for (int i = 0; i < n; i++)
    {
       cout<< v[i]  <<" ";
      
    }

    return 0;
}
