#include<bits/stdc++.h>
using namespace std;
int par[1000005];

int  find(int n){
  if(par[n]==-1){
    return n;
  }
  int leader=find(par[n]);
  par[n]=leader;
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
  bool cycle=false;
  int n,e;cin  >> n >> e;
  memset(par,-1,sizeof(par));
  while (e--)
  {
    int a,b;cin >> a >> b;
    int leadera=find(a);
    int leaderb=find(b);
    if(leadera==leaderb){
      cycle=true;
    }
    if(leadera!=leaderb){
      dsu_union(leadera,leaderb);
    }
      
  }
 if(cycle){
   cout << "cycle detected\n";
 }
 else{
  cout<< "cycle naiii\n";
 }
 


     
  return 0;
}