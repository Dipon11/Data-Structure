#include<bits/stdc++.h>
using namespace std;

int main(){
     
     stack<int>st;
     queue<int>q;

     int n,m;
     cin>>n>>m;

     for (int i = 0; i < n; i++)
     {  int x;
     cin>>x;
       st.push(x);
     }
     for (int i = 0; i < m; i++)
     {
        int x;
        cin>>x;
        q.push(x);
     }
     list<int>l1;
     list<int>l2;
    while (!st.empty())
  {
    l1.push_front(st.top());
    st.pop();
  }

  while (!q.empty())
  {
    l2.push_back(q.front());
    q.pop();
  }

  bool flag=false;
  while (!l1.empty() || !l2.empty())
  {
     //cout<< l1.back()<< " " <<l2.front()  <<endl;
    
     if(l1.back() != l2.front()) 
     {
     flag=true;
     break;
     }
     else{
     l1.pop_back();
     l2.pop_front();
    
     }
  }
   if(flag ==true)  cout<< "NO"  <<endl;
   else  cout<< "YES"  <<endl;

    return 0;
}
