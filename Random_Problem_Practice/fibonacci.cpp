#include<bits/stdc++.h>
using namespace std;
int rec(int n){
    if(n<1){
        return 0;
    }
    return n+rec(n-1);
}
int main()
{
  int n;cin >> n;
  cout << rec(n) << endl;

     
  return 0;
}