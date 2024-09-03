#include<bits/stdc++.h>
using namespace std;

int main(){
     
     stack<int>st;
     queue<int>q;

     int n;
     cin>>n;
     for (int i = 0; i < n; i++)
     {int x;
     cin>>x;
        st.push(x);
     }
     int m;
     cin>>m;
     for (int i = 0; i < n; i++)
     {int x;
     cin>>x;
       q.push(x);
     }
     bool flag=false;
     while (!st.empty() || !q.empty())

     {
       if(st.top() != q.front())
       {
          flag=true;
          break;
       }
       q.pop();
       st.pop();
     }
     if(flag==true)  cout<< "NO"  <<endl;
     else  cout<< "YES"  <<endl;
     
     
     
    

    return 0;
}
