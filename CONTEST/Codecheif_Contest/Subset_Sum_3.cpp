// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define nl endl

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
        
//         vector<int> v(n);
//         bool flag = false;

//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }
        
//         bool one,zero;
//         for (int i = 0; i < n; i++) {
//             ll sum = 0;
//             for (int j = i; j < n; j++) {
//                 sum += v[j];
//                 if (sum % 3 == 0) {
//                     flag = true;
//                     break;
//                 }
//             }
//             if (flag) {
//                 break;
//             }
//         }

//         if (flag) {
//             cout << "Yes" << nl;
//         } else {
//             cout << "No" << nl;
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t; cin >> t;
  while (t--)
  {
     int n; cin >> n;
     bool zero,one,two;
     for (int i = 0; i < n; i++)
     {
        int x; cin >> x;
        if(x%3==0){
            zero=true;
        }
        if(x%3==1){
            one=true;
        }
        if(x%3==2){
            two=true;
        }
     }
     if(zero==true || (one==true&&two==true)){
        cout << "Yes\n";
     }
     else{
        cout << "No\n";
     }
      
  }

    
   
     
  return 0;
}