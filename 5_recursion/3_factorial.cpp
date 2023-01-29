#include <iostream>

using namespace std;

int res=1;
int factorial(int a){
    if(a==0) return res;
    res *=a;
    return factorial(a-1);
}

int main(void){
    int n=10;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}
