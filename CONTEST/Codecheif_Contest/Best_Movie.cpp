#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

class cmp{
    public:
    bool operator()(pair<int,int> l ,pair<int,int> r){
        if(l.first>=7 && r.first>=7){
            return l.second >= r.second;
        }
        else if(l.first>=7){
            return false;
        }
        else if(r.first>=7){
            return true;
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
  while (t--)
  {
    int n; cin >> n;
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    for (int i = 0; i < n; i++)
    {
       int a,b; cin >> a >> b;
       pq.push({a,b});    
    }
    if(pq.top().first<7){
        cout << -1 << nl;
    }
    else{
        cout << pq.top().second << nl;
    }
        
  }

    
   
     
  return 0;
}