#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin >> t;
	while(t--){
	    int n;cin >> n;
	    int min_coin=INT_MAX;
        
        for (int i = 0; i <= n; i++)
        {
           for (int j = 0; j <= n;j++)
           {
                if((i*3+j*2)==n){
                    int taka_5=5*((i*3)/3),taka_4=4*((j*2)/2);;
                    min_coin=min(min_coin,taka_5+taka_4);
                }   
           }      
        }
        cout << min_coin << '\n';
	   
	}

}
