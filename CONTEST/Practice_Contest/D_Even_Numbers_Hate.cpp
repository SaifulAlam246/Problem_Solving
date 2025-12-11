#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve() {
    int n;
    cin >> n;
    multiset<int>even,odd;
    for (int i = 0; i < n; i++)
    {
      int x; cin >> x;
      if(x%2==0){
        even.insert(x);
      }     
      else{
        odd.insert(x);
      }
    }
    ll sum=0,cnt=0;
    while (!even.empty() || !odd.empty())
    {
        if(sum%2==0){
            if(!odd.empty()){
                auto it=odd.begin();
                sum+=*it;
                cnt++;
                odd.erase(it);
            }
            else if(!even.empty()){
                auto it=even.begin();
                sum+=*it;
                if(sum%2!=0){
                    cnt++;
                }
                even.erase(it);
            }
            else{
                break;
            }
        }
        else{
            if(!even.empty()){
                auto it=even.begin();
                sum+=*it;
                cnt++;
                even.erase(it);
            }
            else if(!odd.empty()){
                auto it=odd.begin();
                sum+=*it;
                if(sum%2!=0){
                    cnt++;
                }   
                odd.erase(it);
            }
            else{
                break;
            }
        }
    }
    cout << cnt << nl;
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();
}
