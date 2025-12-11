#include<bits/stdc++.h>
using namespace std;
class cmp{
    public:
     bool operator()(pair<int,int>l,pair<int,int>r){
            if(l.first==r.first){
                return l.second < r.second;
            }
            else{
                return l.first < r.first;
            }
     }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    map<int,int>mp;
    while (t--)
    {
     int q; cin >> q;
    if(q==1){
        int val;cin>> val;
        mp[val]++;
        pq.push({mp[val],val});
    }
    else{
        if(pq.empty()){
            cout << "empty\n";
        }
        else{
            cout << pq.top().second << endl;
            int n=pq.top().first/2;
            mp[pq.top().first]-=n;
            pq.pop();
        }
    }
    }
    



     
  return 0;
}