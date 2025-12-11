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
    string a,b,c; cin >> a >> b >> c;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        char ch=c[i];
        if(ch!=a[i] && ch!=b[i]){
            flag=true;
            break;
        }   
    }
    flag==true ? cout << "YES\n" : cout << "NO\n";
  }

    
   
     
  return 0;
}