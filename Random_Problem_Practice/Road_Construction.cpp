#include<bits/stdc++.h>
using namespace std;
int par[100005];
int grp_size[100005];
int  find(int n){
  if(par[n]==-1){
    return n;
  }
  int leader=find(par[n]);
  par[n]=leader;
  return leader;
}
int mx;
void dsu_union(int node1,int node2){
   int leader1=find(node1);
   int leader2=find(node2);
   if(grp_size[leader1] > grp_size[leader2]){
     par[leader2]=leader1;
     grp_size[leader1]+=grp_size[leader2];
     mx=max(mx,grp_size[leader1]);
   }
   else{
    par[leader1]=leader2;
    grp_size[leader2]+=grp_size[leader1];
    mx=max(mx,grp_size[leader2]);
   }
}
void haha(int n){
    for (int i = 1; i <= n; i++)
    {
        par[i]=-1;
        grp_size[i]=1;
    }
    
}
int main()
{
  int n,e;cin  >> n >> e;
  haha(n);
  int total=n;
  mx=1;
  while (e--)
  {
    int a,b;cin >> a >> b;
    int leadera=find(a);
    int leaderb=find(b);
    
    if(leadera!=leaderb){
        dsu_union(leadera,leaderb);
        total--;
    }
    cout << total << " " << mx << endl;
      
  }
 
 


     
  return 0;
}