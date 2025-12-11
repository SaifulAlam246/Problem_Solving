#include<bits/stdc++.h>
using namespace std;
#define ll long long int





vector<pair<ll,ll>>adj_list[100005];
ll dis[100005];
ll parent[100005];
void dijkstra(ll src){
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    dis[src]=0;
    pq.push({0,src});
    parent[src]=-1;
    while (!pq.empty())
    {
        pair<ll,ll>par=pq.top();
        pq.pop();
        ll par_dis=par.first;
        ll par_node=par.second;

        for (auto child : adj_list[par_node])
        {
            ll child_node=child.first;
            ll child_dis=child.second;

            if(par_dis+child_dis < dis[child_node]){
                dis[child_node]=par_dis+child_dis;
                pq.push({dis[child_node],child_node});
                parent[child_node]=par_node;
            }
        }
        
    }
    
}

int main()
{
  ll n,e;cin >> n >> e;
  while (e--)
  {
    ll a,b,c;cin >> a >> b >> c ;
    adj_list[a].push_back({b,c});
    adj_list[b].push_back({a,c});
  }
  for (ll i = 1; i <= n; i++)
  {
    dis[i]=LLONG_MAX;
  }
  memset(parent,-1,sizeof(parent));
  dijkstra(1);
  if(dis[n]==LLONG_MAX){
    cout << -1 << endl;
    return 0;
  }
  ll node=n;
  vector<ll>tmp;
  while (node!=-1)
  {
    tmp.push_back(node);
    node=parent[node];
  }
  reverse(tmp.begin(),tmp.end());
  for (ll num : tmp)
  {
    cout << num << " ";
  }
  
  


  


     
  return 0;
}