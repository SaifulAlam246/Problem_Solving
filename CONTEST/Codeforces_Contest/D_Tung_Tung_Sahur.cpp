#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        string s1,s2;cin >> s1 >> s2;
        int tl=0,tr=0,sl=0,sr=0;
    
        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i]=='L') sl++;
            else{sr++;}
        }
        for (int i = 0; i < s2.size(); i++)
        {
            if(s2[i]=='L') tl++;
            else{tr++;}
        }
        int rmx=sr*2;
        int lmx=sl*2;
        if(tl==sl || tl >= lmx and tr==sr || tr>=rmx){
            cout << "YES\n";
        }
        else{
            cout <<"NO\n";
        }
    }
    
 
   
     
  return 0;
}