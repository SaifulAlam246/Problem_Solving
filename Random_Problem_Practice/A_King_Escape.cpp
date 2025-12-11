#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int mark[1000][1000];

void queen(int row,int col,int n){
   for(int i=0;i<n;i++){
    mark[row][i]=1;
   }
   cout << nl;
   for(int i=0;i<n;i++){
    mark[i][col]=1;
   }
   for(int i=row,j=col;i<n&&j<n;i++,j++){
       mark[i][j]=1;
   }
   for(int i=row,j=col;i<n&&j>=0;i++,j--){
       mark[i][j]=1;
   }
   for(int i=row,j=col;i>=0&&j<n;i--,j++){
       mark[i][j]=1;
   }
   for(int i=row,j=col;i>=0&&j>=0;i--,j--){
       mark[i][j]=1;
   }
}
bool king (int row,int col,int n){
    for(int i=0;i<n;i++){
      if(mark[row][i]==1){
        return false;
      }
   }
   for(int i=0;i<n;i++){
     if(mark[i][col]==1){
        return false;
      }
   }
   for(int i=row,j=col;i<n&&j<n;i++,j++){
       if(mark[i][j]==1){
        return false;
      }
   }
   for(int i=row,j=col;i<n&&j>=0;i++,j--){
       if(mark[i][j]==1){
        return false;
      }
   }
   for(int i=row,j=col;i>=0&&j<n;i--,j++){
       if(mark[i][j]==1){
        return false;
      }
   }
   for(int i=row,j=col;i>=0&&j>=0;i--,j--){
       if(mark[i][j]==1){
        return false;
      }
   }
   return true;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;cin >> n;
  int a1,a2,b1,b2,c1,c2;cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
  //a1-=1,a2-=1,b1-=1,b2-=1;
  a2-=1;
  queen(a1,a2,n);
  b2-=1;
  if(king(b1,b2,n)){
    cout << "YES\n";
  }
  else{
    cout << "NO\n";
  }
  for (int i = 0; i < n; i++)
  {
    for (int j =0; j <n; j++)
      {
        cout << mark[i][j] << " ";
      }
      cout  << nl;
  }
  
    
   
     
  return 0;
}