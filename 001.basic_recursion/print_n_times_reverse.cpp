#include <bits/stdc++.h>
using namespace std;

void func(int i, int n){
  if(i>n) return;
  func(i+1, n);
  cout << i << endl;
}

int main(){
  int n = 5;
  func(1,n);
  return 0;
}
