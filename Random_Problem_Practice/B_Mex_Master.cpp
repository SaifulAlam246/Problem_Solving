#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
    int n; cin >> n;
    int cnt0=0,cnt1=0;

    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x==0){
            cnt0++;
        }
        else if(x==1){
            cnt1++;
        }

    }
    if(cnt0<=(n+1)/2){
        cout << 0 << nl;
    }
    else if(cnt0+cnt1==n && cnt1>0){
        cout << 2 << nl;
    }  
    else{
        cout << 1 << nl;
    }
  }

    
   
     
  return 0;
}