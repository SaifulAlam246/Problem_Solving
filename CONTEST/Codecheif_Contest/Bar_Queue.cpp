#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
    int n; cin >> n;
    string s; cin >> s;
    int grl=0,boy=0;
    for (auto ch : s)
    {
        if(boy>grl*2){
            break;
        }
        if(ch=='G') grl++;
        if(ch=='B') boy++;
    }
    cout << grl+boy << endl;
  }
  
  
  


    
   
     
  return 0;
}