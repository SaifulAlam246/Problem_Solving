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
        int n,d; cin >> n >> d;
        int cnt=0,flag=0;
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            if(x>d && !flag){
                cnt++;
                flag=true;
            }
            if(x<=d && flag){
                cnt++;
                flag=false;
            }

        }
        cout << cnt << nl;
  }

    
   
     
  return 0;
}