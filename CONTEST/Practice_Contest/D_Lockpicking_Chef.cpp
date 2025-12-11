#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    int n,k;cin >> n >> k;
    string s,t;cin >> s >> t;
    int window=k;
    int l=0,r=0;
    int mn=INT_MAX;

    while (r<n)
    {
        if(r-l+1==window){
            int j=0,dis=0;
            for (int i = l; i <= r; i++)
            {
               int s1=s[i]-'0',t1=t[j]-'0';
               int diff=abs(s1-t1);
               dis+=min(diff,10-diff); 
               j++;
            }
            mn=min(mn,dis);
            l++,r++;
        }
        else{
            r++;
        }
    }
    cout << mn << nl;
    
}


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
    solve();   
  }

  return 0;
}