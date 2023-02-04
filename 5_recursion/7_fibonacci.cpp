/*
 * fibonacci 
 * n = n-1+n-2
 * 1 1 2 3 5 8 ....
 * break condition if n<3, return 1
 * recursion equation n = (n-1) + (n-2)
 */


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
