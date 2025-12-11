#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        char first=s[0];
        char last =s[n-1];
        if(first==last){
            cout << "NO\n";
        }   
        else{
            cout << "YES\n";
        }
    }
    
    
   
     
  return 0;
}