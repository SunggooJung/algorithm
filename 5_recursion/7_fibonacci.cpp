#include <iostream>
using namespace std;

int fibo(int n){
    if(n<3) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main(void){
    int n = 7;
    int res = fibo(7);
    cout << res << endl;
    return 0;
}
