#include <bits/stdc++.h>
using namespace std ;
#define  ll long long 
int main(){
    unsigned int t;
  long long a, b, r;
   
    cin >> t;
    while(t--){
        cin>> a>>b>>r ;
        ll min =   abs ((a^0)-(b^0));;
        ll x_min = 0;
         ll total = abs ((a^0)-(b^0)); 
 
        for (ll i=0;i<r ;i++){
            total = abs ((a^i)-(b^i));
            if (total < min )
             {
                x_min  = i ;
                min = total;
 
             }
        } 
        cout<< min ;
    }
    return 0;
}