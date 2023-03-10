#include <iostream>
using namespace std;

void hanoi(int a, int b, int n){
	if(n==1){
        cout <<  a << ' ' << b << '\n'; 
        return;
    }
	hanoi(a,6-a-b, n-1);
    cout << "check " << n << ' ' << a << ' ' << b << '\n'; 
    hanoi(6-a-b, b, n-1);
    cout << "cc " << endl;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int c;
	cin >> c;
    cout << (1<<c)-1 << endl;
	hanoi(1,3,c);
	return 0;
}
