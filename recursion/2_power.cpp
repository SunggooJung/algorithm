// create a recursion function 
// that calculates (a^b) mod m.
//

#include <iostream>
#include <utility>
int res =1;
using namespace std;

int power(int a,int b,int m){
    if(b<=0) return res%m;
    res = (res*a)%m;
    return power(res,b-1,m);
}


int main(void){
    int a=6, b=100, m=5;
    int res = power(a,b,m);
    cout << res << endl;
    return 0;
}
