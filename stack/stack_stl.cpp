#include <iostream>
#include <stack>
using namespace std;

int main(void){
    std::stack<int> S;

    S.push(10);
    S.push(20);
    S.push(30);
    std::cout << S.size() << '\n';

    if(S.empty()) std::cout<<"S is empty\n";
    else std::cout << "S is not empty\n";

    S.pop();
    std::cout << S.top() << '\n';
    S.pop();
    std::cout << S.top() << '\n';
    S.pop();

    if(S.empty()) std::cout<<"S is empty\n";
    std::cout << S.top() << '\n';
}
