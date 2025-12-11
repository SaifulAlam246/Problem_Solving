#include<bits/stdc++.h>
using namespace std;
int par[1005];
int find(int node){
    if(par[node]==-1){
        return node;
    }
   int leader=find(par[node]);
   par[node]=leader;
   return leader;
}

void dsu_union(int node1,int node2){
    int leader1=find(node1);
    int leader2=find(node2);
    if(leader1!=leader2){
      par[leader2]=leader1;
    }
   
 }

int main()
{
  memset(par,-1,sizeof(par));
  int n; cin >> n;
   int e=n-1;
   vector<pair<int,int>>v;
   while (e--)
   {
     int a,b; cin >> a >> b;
     int leaderA=find(a);
     int leaderB=find(b);
     if(leaderA==leaderB){
         v.push_back({a,b});
     }
     else{
        dsu_union(a,b);
     }
   }
   int cnt=0;
   vector<pair<int,int>>v2;
   for (int i = 1; i <=n; i++)
   {
     int leader1=find(1);
     int leader2=find(i);
      if(leader1!=leader2){
        v2.push_back({leader1,leader2});
        cnt++;
        dsu_union(leader1,leader2);
      }
   }
   cout << cnt << endl;
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i].first << " " << v[i].second << " " <<  v2[i].first << " " << v2[i].second << endl;
  }
  
   
   


     
  return 0;
}