//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int num){
  //new element address = unused;
  //front element address = addr;
  //next element address = addr+1;
  //new element pre value = front element address (addr)
  //new element nxt value = next element address (front elemnt nxt value)
  //front element nxt value = new element address (unused)
  //next element pre value = new element address (unused)
//  dat[unused] = num;
//  pre[unused] = addr;
//  nxt[unused] = nxt[addr];
//  nxt[addr] = unused;
//  pre[addr+1] = unused;
//  unused++;
//
  dat[unused] = num;
  pre[unused] = addr;
  nxt[unused] = nxt[addr];
  if(nxt[addr] != -1) pre[nxt[addr]] = unused;
  nxt[addr] = unused;
  unused++;
}

void erase(int addr){
  //erasing address = addr
  //front element nxt value = erasing address nxt value
  //next element pre value = erasing address pre value 
  nxt[pre[addr]] = nxt[addr];
  if(nxt[addr]!=-1) pre[nxt[addr]] = pre[addr];
}

void traverse(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur] << ' ';
    cur = nxt[cur];
  }
  cout << "\n\n";
}

void insert_test(){
  cout << "****** insert_test *****\n";
  insert(0, 10); // 10(address=1)
  traverse();
  insert(0, 30); // 30(address=2) 10
  traverse();
  insert(2, 40); // 30 40(address=3) 10
  traverse();
  insert(1, 20); // 30 40 10 20(address=4)
  traverse();
  insert(4, 70); // 30 40 10 20 70(address=5)
  traverse();
}

void erase_test(){
  cout << "****** erase_test *****\n";
  erase(1); // 30 40 20 70
  traverse();
  erase(2); // 40 20 70
  traverse();
  erase(4); // 40 70
  traverse();
  erase(5); // 40
  traverse();
}

int main(void) {
  fill(pre, pre+MX, -1);
  fill(nxt, nxt+MX, -1);
  insert_test();
  erase_test();
}
