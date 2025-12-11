#include <bits/stdc++.h>
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
        string res = "";
        map<char,int> mp;
        vector<char>v;

        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;

            bool paisi=false;
            for (auto c : v)
            {
                if(mp[c]==x){
                    res+=c;
                    mp[c]++;
                    paisi=true;
                    break;
                }
            }
            if(!paisi){
                for (char c = 'a'; c <= 'z'; c++)
                {
                    if (mp.find(c)==mp.end()) {
                        res += c;
                        mp[c]=1;
                        v.push_back(c);
                        break;
                    }
                }
            }
        }
        cout << res << nl;
    }

    return 0;
}
