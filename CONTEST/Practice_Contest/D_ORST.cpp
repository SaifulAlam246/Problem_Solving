#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        set<int> st;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            st.insert(b[i]);
        }
        int mx = *st.rbegin();
        int idx = n - mx;
        multiset<int> ml;
        for (int i = idx; i < n; i++)
        {
            ml.insert(a[i]);
        }
        for (int i = 0; i < idx; i++)
        {
            cout << a[i] << " ";
        }
        for (auto m : ml)
        {
            cout << m << " ";
        }
        cout << nl;
    }

    return 0;
}