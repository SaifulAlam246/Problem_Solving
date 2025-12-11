#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--)
    {
        int a,b,c; cin >> a >> b >> c;
        for (int i=1;i<=5;i++)
        {
            if(a  < 5){
                a++;
            }
            else if(b < 5){
                b++;
            }
            else{
                c++;
            }
        }
        cout << a*b*c << endl;
    }
    
 
    
   
     
  return 0;
}