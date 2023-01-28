//print N to 1
//sum N to 1
#include <iostream>

using namespace std;

void recursion(int a){
    if(a<=0) return;
    cout << a << endl; 
    recursion(a-1);
}

int sum(int a){
    if(a<=0) return 0;
    return a+sum(a-1);
}

int main(void){
    int i = 100000;
    recursion(i);
    cout << sum(i) <<endl;
    
    
}
