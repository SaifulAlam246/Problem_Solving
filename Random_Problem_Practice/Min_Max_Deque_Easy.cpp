#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;
        // deque<int> d(n,0);
        // // d.push_back(v[0]);
        // // d.push_back(v[1]);
        pair<int,int>p={v[0],v[1]};
        for (int i = 2; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (p.first < p.second)
                {
                    p.first=v[i];
                }
                else
                {
                    p.second=v[i];
                }
            }
            else
            {
                if (p.first > p.second)
                {
                    p.first=v[i];
                }
                else
                {
                    p.second=v[i];
                }
            }
        }
        cout << min(p.first,p.second) << endl;
    }
}
