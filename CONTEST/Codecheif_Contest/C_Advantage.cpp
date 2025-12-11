#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    int n; cin>>n;
    vector<int> a (n) ;
    vector<int> b(n) ;
    for(int i = 0 ;i<n;i++)
    {
        cin>>a[i];
        b[i] = a[i] ;
    }
    sort(b.begin(),b.end());
    for(int i = 0 ;i<n;i++)
    {
      if(a[i] != b[n-1])
      {
        cout<<a[i] - b[n-1]<<" ";
      }
      else
      {
        cout<<a[i] - b[n-2]<<" ";
      }
    }
    cout<<"\n";
      
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