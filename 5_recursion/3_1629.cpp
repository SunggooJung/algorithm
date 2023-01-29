//
// calucate (a^b)%m
// a,b,n <= 2,147,483,647 (range of int)
// hint1: a^n * a^n = a^2n
// hint2: a^n%m = k --> a^2n%m = k^2
// think in a recursive way
// Therefore, to calculate a^2n%m -> a^n%m -> a^n/2%m을 알면 된다.
// {a^(b/2) mod m} * {a^(b/2) mod m} * a; 
#include <iostream>

using namespace std;
using ll = __int64_t;
ll res = 1;
ll calc_pow(ll a, ll b, ll m){
    if(b==1) return a%m;
    ll res = calc_pow(a,b/2,m);
    res = res*res%m;
    if(b%2==0) return res;
    return res*a%m; 
}

int main(void){
    ll a,b,m;
    cin >> a >> b >>m;
    ll result = calc_pow(a,b,m);
    cout << result << endl;
    return 0;
}

