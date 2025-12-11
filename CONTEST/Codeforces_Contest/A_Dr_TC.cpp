#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
 
        ll msum = 0, sum = 0, Ans = 0;
 
        for(char ch : s){
            if(ch == '1'){
                msum++;
            }
        }
 
        sum = msum;
 
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                sum -= 1;
                Ans += sum;
                sum = msum;
            }
            else{
                sum += 1;
                Ans += sum;
                sum = msum;
            }
        }
 
        cout << Ans << endl;
    }
 
    return 0;
}