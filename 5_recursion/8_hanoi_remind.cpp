//1~n-1번째 타워를 두번째 기둥으로 옮기고
//n번째 타워를 마지막 기둥으로 옮기고
//1~n-1번째 타워를 마지막 기둥으로 옮긴다
//end condition: 마지막 원판일땐 마지막기둥으로 옮기고 리턴

#include <iostream>
using namespace std;


int hanoi(int start, int end, int mid, int n){
    if(n==1){
        cout << start << " " << end << endl;
        return 0;
    }
    
    hanoi(start, mid, end,n-1);
    cout <<  start << " " << end << endl;
    hanoi(mid, end, start, n-1);
}

int main(void){
    hanoi(1,3,2,3);
    return 0;
}
