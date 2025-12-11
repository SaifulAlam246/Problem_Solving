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
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        ll op = n * 3;
        vector<int> v;

        if (s == t)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 1; i < n; i++) {
                if (s[i] != t[i]) {
                        s[i]=t[i];
                        v.push_back(i);
            
                }
            }

            if (s == t && n*3>=v.size())
            {
                cout << v.size() << endl;
                for (auto n : v)
                {
                    cout << n << " ";
                }
                cout << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
