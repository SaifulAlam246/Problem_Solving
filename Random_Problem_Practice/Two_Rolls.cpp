#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define nl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int x, d;
    cin >> x >> d;
    int need = 50 - x, ok = 0;
    for (int i = d; i <= d + 5; i++)
    {
        for (int j = d; j <= d+5; j++)
        {
            if (i+j== need)
            {
                ok = 1;
                break;
            }
        }
    }
    ok == 1 ? cout << "Yes\n" : cout << "No\n";
}

int main()
{
    fast

        int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}