#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isprime(ll num){
    if(num==1){
        return false;
    }
    if(num==2 || num==3){
        return true;
    }
    bool p=true;
    for (ll i = 2; i < num; i++)
    {
        if(num%i==0){
            p=false;
            break;
        }
    }
    if(p){
        return true;
    }
    else{
        return false;
    }
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        ll a,b; cin >> a >> b;
        string s=to_string(a);
        string m="";
        for (int i = 0; i < b; i++)
        {
            m+=s;
        }
        long long num=stoll(m);
        if(isprime(num)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    
    
    
   
     
  return 0;
}