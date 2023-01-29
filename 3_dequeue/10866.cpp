#include <iostream>
#include <deque>
using namespace std;

int main(){
    int n;
    cin >> n;
    deque<int> DQ;

    while(n--){
        string dq;
        cin >> dq;
        int a;

        if(dq=="push_back"){
            cin >>a;
            DQ.push_back(a);
        }else if(dq=="push_front"){
            cin >>a;
            DQ.push_front(a);
        }else if(dq=="pop_front"){
            if(!DQ.empty()){    
                cout <<  DQ.front() << endl;
                DQ.pop_front();
            }else cout <<  -1 <<  endl;
        }else if(dq=="pop_back"){
            if(!DQ.empty()){    
                cout <<  DQ.back() << endl;
                DQ.pop_back();
            }else cout <<  -1 <<  endl;
        }else if(dq=="size"){
            cout <<  DQ.size() << endl;
        }else if(dq=="empty"){
            if(DQ.empty()) cout <<  1 << endl;
            else cout <<  0 <<  endl;
        }else if(dq=="front"){
            if(DQ.empty()) cout <<  -1 << endl;
            else cout <<  DQ.front() <<  endl;
        }else if(dq=="back"){
            if(DQ.empty()) cout <<  -1 << endl;
            else cout <<  DQ.back() <<  endl;
        }        
    }
    return 0;
}
