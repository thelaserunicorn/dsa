#include <iostream>
using namespace std;

int reverse_num(int n){
  int rev_num = 0;
  while(n>0){
    int last_digit = n % 10;
    rev_num = (rev_num*10) + last_digit;
    n = n / 10;
  }
  cout << rev_num;
  return rev_num;
}


int main(){
  reverse_num(7899);
  return 0;
}
