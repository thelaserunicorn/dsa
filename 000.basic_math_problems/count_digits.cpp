#include <iostream>

int count_digits(int n){
  int c = 0; // count
  while(n > 0){
    n = n/10;
    c = c + 1;
  }
  return c;
}

int main () {
  int count = count_digits(75544);
  std::cout << count << std::endl;
  return 0;
}
