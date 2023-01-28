#include <iostream>
#include <list>
#include <iterator>
int main(void){
    std::list<int> L = {1,2};
    std::list<int>::iterator t = L.begin();
    L.push_front(10);
    //10,1,2,    
    std::cout << *t << '\n';

    L.push_back(5);
    //10,1,2,5
    L.insert(t,6);
    //10 6 1 2 5
    t++;
    t = L.erase(t);
    std::cout << *t << '\n';
    for(auto i: L) std::cout << i << ' ';
    std::cout << '\n';

    for(auto it = L.begin(); it !=L.end(); it++) 
        std::cout << *it << ' ';
    
}