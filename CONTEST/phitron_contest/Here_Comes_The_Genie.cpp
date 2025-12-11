#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int n; cin >> n;
  vector<int>v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
 sort(v.begin(),v.end(),greater<int>());
 long long int sum=v[0];
 for (int i=1;i<n;i++)
 {
    v[i]=min(v[i-1]-1,v[i]);
    if(v[i]==0){
      break;
    }
    sum+=v[i];
 }

cout << sum << endl;
 


     
  return 0;
}