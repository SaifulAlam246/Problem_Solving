#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n; cin >> n;
  for (int i = 0; i < n; i++)
  {
    int cnt=0,mx=0;
    bool flag=false;
    for (int i = 0; i < 6; i++)
    {
       char c;cin >> c;
       if(c=='W'){
        cnt++;
       }
       else{
        mx=max(mx,cnt);
        cnt=0;
       }
    } 
    mx=max(mx,cnt);
    if(mx>=3){
        cout << "YES\n";
    } 
    else{
        cout << "NO\n";
    }
  }

    
   
     
  return 0;
}