#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    int n;cin >> n;
    ll odd = 0, even = 0,ans=0;


    
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0 && i%2==0){
            even++;
        }   
        else if(n%i==0 && i%2!=0){
            odd++;
        }
    }

    cout << odd << " " << even << endl;     
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