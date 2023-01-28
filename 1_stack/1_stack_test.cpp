#include <iostream>
using namespace std;
const int MX = 10000005;
int dat[MX];
int pos = 0;

//add value x to a stack
void push(int x){
    dat[pos++] = x;
}

//remove a value at the top of a stack
void pop(){
    pos--;
}

int top(){
    return dat[pos-1];
}
void test(){
    push(5); push(4); push(3);
    cout << top() << '\n'; // 3
    pop(); pop();
    cout << top() << '\n'; // 5
    push(10); push(12);
    cout << top() << '\n'; // 12
    pop();

}
int main(void){

    test();
}
