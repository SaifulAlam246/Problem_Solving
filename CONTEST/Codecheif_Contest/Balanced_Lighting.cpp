#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
    int n; cin >> n;
    int zero=0,one=0,two=0;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x; 
        if(x==0){
            zero++;
        } 
        else if(x==1){
            one++;
        } 
        else{
            two++;
        }
    }
    int d=abs(one-two);
    int s=abs(d-zero);
    if(zero<d){
        cout << "No\n";
    }
    else if(s%2==0){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
        
  }
    
   
     
  return 0;
}