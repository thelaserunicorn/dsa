#include <iostream>
using namespace std;

int reverse_num(int n){
  int original = n;
  int rev_num = 0;
  while(n>0){
    int last_digit = n % 10;
    rev_num = (rev_num*10) + last_digit;
    n = n / 10;
  }
  if(original == rev_num) cout << "true" <<endl;
  else cout << "False" << endl;
  return rev_num;
}


int main(){
  reverse_num(7887);
  return 0;
}
