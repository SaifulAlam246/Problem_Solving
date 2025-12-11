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
        int zero=0,one=0,k=0;
        for(auto ch : s){
            if(ch=='0'){
                zero++;
            }
            else if(ch=='1'){
                one++;
            }
            if(zero==one){
                k++;
            }
        }
        int ans=1;
        for (int i = 0; i < k; ++i)
        {
            ans=ans*2;
        }
        cout << ans << endl;
    }

    
   
     
  return 0;
}