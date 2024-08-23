#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int n;
     cin>>n;
     int a[n];
     for (int i = 0; i < n; i++)
     {
        cin>>a[i];
     }
     int x;
     cin>>x;
     int l=0;
     int r=n-1;
     bool flag=false;
     while(l<=r)
     {
      
      int mid=(l+r)/2;
      if(a[mid]==x)
      {
        flag=true;
        break;
      }
      else if(x>a[mid])
      {
        //dane jao
        l=mid+1;

      }
      else{
        //bame jao
        r=mid-1;
      }
     
     }
     if(flag==true)
      {
         cout<< "Found"  <<endl;
        
      }

    return 0;
}
