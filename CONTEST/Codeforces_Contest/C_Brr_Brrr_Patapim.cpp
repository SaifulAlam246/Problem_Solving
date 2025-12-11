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
        int num=n*n;
        deque<int>d;
        map<int,bool>mp;
        for (int i = 0; i < num; i++)
        {
            int x; cin >> x;
            if(mp[x]==false){
                d.push_back(x);
                mp[x]=true;
            }
        }
        for (int i = 1; i <= n*2; i++)
        {
            if(mp[i]==false){
                d.push_front(i);
            }
        }
        for(auto it : d){
            cout << it << " ";
        }
        cout << endl;
    }
    
    
    
   
     
  return 0;
}