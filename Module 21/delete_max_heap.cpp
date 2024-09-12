#include<bits/stdc++.h>
using namespace std;
void insert_heaap(vector<int>&v ,int x)
{
    v.push_back(x);
      int curr =v.size()-1;
     while(curr != 0)
    {
       int parent =(curr -1)/2;
        if(v[parent] < v[curr] )
    
      swap(v[parent] , v[curr]);
      else
       break;
      curr=parent;
    
    }
}
void delete_heap( vector<int> &v )
{
  v[0]=v[v.size()-1];
  v.pop_back();
  int curr=0;
  while(true)
  {
        int left= curr*2+1;
        int right= curr*2+2;
        int last_indx=v.size()-1;
        if(left <= last_indx &&right <=last_indx)
        {
                 //duitai ase
                 if(v[left] >= v[right] && v[left] >v[curr])
                 {
                    swap(v[left],v[curr]);
                    curr=left;

                 }
                 else if (v[right] >= v[right] && v[right] >v[curr])
                 {
                  swap(v[right],v[curr]);
                    curr=right;
                 }
                 else
                 {
                  break;
                 }
        }
        else if(left <= last_indx)
        {
          //left ase
             if(v[left]  > v[curr])
                 {
                    swap(v[left],v[curr]);
                    curr=left;

                 }
                 else{
                  break;
                 }
        }
        else if (right <=last_indx)
        {
          //right ase
            if(v[left]  > v[curr])
                 {
                    swap(v[right],v[curr]);
                    curr=right;

                 }
                 else{
                  break;
                 }
        }
        else {
          break;
        }
  }
}
void print_heap(vector<int>v)
{
 
      for(int val : v)
      {
         cout<< val  <<" ";
      }
       cout  <<endl;
      
}
int main(){
     int n;
     cin>>n;
     vector<int>v;
     for (int i = 0; i < n; i++)
     {
      int x;
      cin>>x;
       insert_heaap(v,x);
     }
    
     delete_heap(v);
     print_heap(v);
     delete_heap(v);
     print_heap(v);
    // delete_heap

    return 0;
}
