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
        int n, k;
        cin >> n >> k;
        string s1, s2;
        cin >> s1 >> s2;
        int s1_even = 0, s1_odd = 0, s2_even = 0, s2_odd = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                if (s1[i] == '1')
                {
                    s1_even++;
                }
                if (s1[i] == '0')
                {
                    s1_odd++;
                }
                if (s2[i] == '1')
                {
                    s2_even++;
                }
                if (s2[i] == '0')
                {
                    s2_odd++;
                }
            }
        }
        if(s1_even==s2_odd || s2_even==s1_odd && s1_even+s1_odd<=k){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}