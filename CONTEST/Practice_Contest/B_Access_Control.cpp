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
     int n ,x; cin >> n >> x;
     string s; cin >> s;
     int swip=0,remain=0;
     bool flag=true;
     for(char ch : s){
        if(ch=='0'){
            if(swip==0){
                flag=false;
                break;
            }
            swip--;
        }
        if(ch=='1'){
            swip=x;
        }
     }
     if(flag){
        cout << "YES\n";
     } 
     else{
        cout << "NO\n";
     }
  }

    
   
     
  return 0;
}