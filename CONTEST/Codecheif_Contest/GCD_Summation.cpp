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
    int n,k; cin >> n >> k;
   
    if(n-1==k){
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        continue;
    }
    
    int val=1e9; 
    vector<int>v(n);
    for (int i = 0; i < n-2; i++)
    {
        v[i]=val;
        val--;
    } 
    if(v.size()>2){
        v[n-3]=1;
    }
    k-=(n-2);
    v[n-2]=k;
    v[n-1]=k*2;
    if(k<=0){
        cout << -1 << nl;
        continue;
    }
    for(int num:v){
        cout << num << " ";
    }
   cout << nl;

  }

    
   
     
  return 0;
}