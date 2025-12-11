#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t; cin >> t;
  while (t--)
  {
    int n; cin >> n;
    vector<int>v(n-2);
    long long sum=0;
    for (int i = 0; i < v.size(); i++)
    {
      cin >> v[i];
      sum+=v[i];
    }
    long long total; cin >> total;
    long long miss=total-sum;
    if(miss < 0){
        cout << 0 << endl;
    }
    else{
        cout << miss+1 << endl;
    }
  }
  
  


     
  return 0;
}