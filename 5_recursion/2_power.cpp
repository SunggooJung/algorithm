// create a recursion function 
// that calculates (a^b) mod m.
//

#include <iostream>
#include <utility>
using namespace std;
using ll = long long;

ll res =1;
ll power(ll a,ll b,ll m){
    ll val  = 1;
    while(b--) val  = val *a % m;
    return val;
}


int main(void){
    ll a=12, b=116;
    ll m=67;
    ll result = power(a,b,m);
    cout << result << endl;
    return 0;
}
