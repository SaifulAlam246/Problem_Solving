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
    string s , t ; cin >> s >> t;
    if(s==t){
        cout << "Yes\n";
    }
    else{
        for (int i = 0; i < n; i++)
        {
            if(i>0 && i < n-1){
                if(s[i]!=t[i]){
                    if(s[i-1]==t[i]){
                        s[i]=t[i];
                    }
                    else if(s[i+1]==t[i]){
                        s[i]=t[i];
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
        
  }

    
   
     
  return 0;
}