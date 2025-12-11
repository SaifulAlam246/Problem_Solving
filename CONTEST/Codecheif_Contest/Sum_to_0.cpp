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
       if(n==1){
        cout << -1 <<nl;
       }
       else if(n%2==0){
        for (int i = 0; i < n; i++)
        {
            if(i%2==0){
                cout << 1 << " ";
            }
            else{
                cout << -1 << " ";
            }
        }    
        cout << nl; 
       }
       else{
           for (int i = 0; i < n-3; i++)
           {
                if(i%2==0){
                    cout << 1 << " ";
                }
                else{
                    cout << -1 << " ";
                }
           }
           cout << 1 << " " << 2 << " " << -3 << nl;
           
       }
  }

    
   
     
  return 0;
}