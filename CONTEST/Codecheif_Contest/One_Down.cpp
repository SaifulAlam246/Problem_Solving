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
    int n; cin >>n;
    string s,t; cin >> s >> t;
    if(n==1){
        cout << "No\n";
        continue;
    }
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1' && t[i]=='0'){
            for (int j = i+1; j < n; j++)
            {
               if(s[j]=='1' && t[j]=='0'){
                  s[i]=t[i];
                  s[j]=t[j];
                  break;
               }
            }
            
        }   
    }
    if(s==t){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
  }

    
   
     
  return 0;
}