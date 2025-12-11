#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
     int n;cin >> n;
     vector<int>v(n);
     for(int i=0;i<n;i++) cin >>v[i];
     sort(v.begin(),v.end());
     ll even=0,odd=0,sum=0;
     for (int i = 0; i < n; i++)
     {
        if(v[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
        sum+=v[i];
     } 
     if(odd==1){
        cout << "Yes\n";
     }
     else{
        cout << "No\n";
     }
    
    
    
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