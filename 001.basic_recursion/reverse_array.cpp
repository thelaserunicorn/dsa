#include <bits/stdc++.h>
using namespace std;

void f(int i, int arr[], int n){
  if(i>=n/2) return;
  swap(arr[i], arr[n-i-1]);
  f(i+1, arr, n);
}

int main(){
  int arr[5] = {10, 20, 30, 40, 50};
  f(0, arr, 5);
  for (const auto &value: arr){
    cout << value << endl;
  }
  return 0;
}
