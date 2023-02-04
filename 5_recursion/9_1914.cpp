/*
 * hanoi tower move disk from tower1 to tower3
 * breaking condition: remain only 1 disk
 * recursion equation: n번째 디스크를 3번 타워에 옮기고 
 *                     1~n-1번째 디스크를 옮기면 된다.
 *                     즉, n개의 디스크를 옮기려면 n-1개의 디스크를 먼저 옮겨놓으면 되고
 *                     n-1개의 디스크를 옮기려면 n-2개의 디스크를 먼저 옮겨놓으면 된다.
 *                     1. 1~n-1개의 디스크를 중간 타워로 옮긴다
 *                     2. n번 디스크를 목적 타워로 옮긴다
 *                     3. 1~n-1개의 디스크를 목적 타워로 옮긴다
 */                   

#include <iostream>
#include <cmath>
using namespace std;

void func(int start, int end, int mid, int n){

    if(n==1){
        printf("%d %d\n", start, end);
        //cout << start << " " << end << endl;
        return ;
    }

    //start에 있는 n-1개의 기둥을 mid로 옮긴다.
    func(start, mid, end, n-1);
    //start에 있는 n번째 기둥을 end로 옮긴다.
    printf("%d %d\n", start, end);
    //cout << start << " " << end << endl;
    //mid에 있는 n-1개의 기둥을 end로 옮긴다.
    func(mid, end, start, n-1);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s = to_string(pow(2,n));
    int x = s.find('.');
    s = s.substr(0,x);
    cout << s << " " << s[s.length()-1] << " " <<s.length() << endl;
    s[s.length()-1] -= 1;
    
    cout << s << endl;
    if(n<=20) func(1,3,2,n);
    return 0;
}
