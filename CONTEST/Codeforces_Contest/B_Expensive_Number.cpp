#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        long long n; cin >> n;
        long long sum=0;
        long long  num=n;
        while (num>0)
        {
            long long x= num%10;
            sum+=x;
            num/=10;
        }
        int cnt=0;
        while (n>10 && n/sum > 0)
        {
            long long l=n%10;
            sum-=l;
            n/=10;
            int res=n/sum;
            if(res > 0 && sum > 0){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    
    
    
    
   
     
  return 0;
}