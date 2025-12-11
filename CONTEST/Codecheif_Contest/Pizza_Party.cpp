#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
    int a,b;cin >> a >> b;
    a+=1;
    int lagbe = (a * 4) + (b * 3);
    int pizza=(lagbe+7)/8;
    cout << pizza << endl;

    
   
     
  return 0;
}