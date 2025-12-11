// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;
    
//     while(t--)
//     {
//         long long n, h;
//         cin >> n >> h;

//         long long mx1 = -1;
//         long long mx2 = -1;

//         for (long long i = 0; i < n; i++)
//         {
//             long long x, y;
//             cin >> x >> y;
//             if (x == 1)
//             {
//                 mx1 = max(mx1, y);
//             }
//             else
//             {
//                 mx2 = max(mx2, y);
//             }
//         }

//         if (mx1 == -1) 
//         {
           
//             long long ans = 2 * (h / mx2);
//             if (h % mx2 != 0)
//             {
//                 ans += 2;
//             }
//             cout << ans << endl;
//             continue;
//         }

//         if (mx2 == -1) 
//         {
    
//             long long ans = (h / mx1);
//             if (h % mx1 != 0)
//             {
//                 ans += 1;
//             }
//             cout << ans << endl;
//             continue;
//         }

//         if (mx2 <= (2 * mx1))
//         {

//             long long ans = (h / mx1);
//             if (h % mx1 != 0)
//             {
//                 ans += 1;
//             }
//             cout << ans << endl;
//         }
//         else
//         {
           
//             long long ans = 0;

        
//             ans = 2 * (h / mx2);
//             h %= mx2;

          
//             if (h > 0)
//             {
//                 if (h <= mx1)
//                 {
//                     ans += 1; 
//                 }
//                 else
//                 {
//                     ans += 2; 
//                 }
//             }

//             cout << ans << endl;
//         }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

bool cmp(pair<int,int>l,pair<int,int>r){
    double val1=(double)l.second/l.first;
    double val2=(double)r.second/r.first;
    return val1 > val2;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
    int n,h;cin >> n >> h;
    vector<pair<int,int>>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;   
    }    
    sort(v.begin(),v.end(),cmp);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i].first << " " << v[i].second << nl;   
    // }   
    int ans=0;
    int damage=h/v[0].second;
    h-=(damage*v[0].second);
    ans+=(damage*v[0].first);

    if(h>0){
        int mn=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int cnt=((h+v[i].second)-1)/v[i].second;
            int time=cnt*v[i].first;
            mn=min(mn,time);  
        }
        ans+=mn;
    }
    cout << ans << nl;
  }

    
   
     
  return 0;
}