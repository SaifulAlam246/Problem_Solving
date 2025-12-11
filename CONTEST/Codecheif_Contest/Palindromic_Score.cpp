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
        int x,y,z;cin >> x >> y >> z;
        int a=y+z;
        int b=a+z;
        int c=x+y;
        int maximum;
        if (a >= b && a >= c)
            maximum = a;
        else if (b >= a && b >= c)
            maximum = b;
        else
            maximum = c;
    
        cout << maximum << endl;
    }

  
 
  
  
  
  

    
   
     
  return 0;
}