#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        string s1,s2,s3; cin >> s1 >> s2 >>s3;
        string res="";
        res+=s1[0];
        res+=s2[0];
        res+=s3[0];
        cout << res << endl;
    }
    
   
   
     
  return 0;
}