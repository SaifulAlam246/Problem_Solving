#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int n;cin >> n;
  vector<int>v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  int target;cin >> target;
  int paisi=-1;
  for (int i = 0; i < n; i++)
  {
    if(v[i]==target){
        paisi=i;
        break;
    }
  }
  cout << paisi << endl;
  


     
  return 0;
}