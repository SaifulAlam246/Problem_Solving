#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
   
    while (t--)
    {
        int n;
        cin >> n;
        map<int,string>mp;
        mp[1]="LB",mp[2]="MB",mp[3]="UB",mp[4]="LB",mp[5]="MB",mp[6]="UB",  mp[7]="SL",mp[0]="SU";
        if (n < 8)
        {
            if(n==7){
                n+=1;
                cout << n << mp[0] << '\n';
            }
            else if(n<4){
              n+=3;
              cout << n << mp[n] << '\n';
           }
           else{
              n-=3;
              cout << n << mp[n] << '\n';
           }
        }
        else{
            int mod=n%8;
            if(mod==0){
                n-=1;
                cout << n << mp[7] << '\n';
            }
            else if(mod==7){
                n+=1;
                cout << n << mp[0] << '\n';
            }
            else if(mod<4){
              mod+=3;
              n+=3;
              cout << n << mp[mod] << '\n';
           }
           else{
              mod-=3;
              n-=3;
              cout << n << mp[mod] << '\n';
           }
        }
    }
}
