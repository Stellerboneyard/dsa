#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int x = 4;
    int ans = 1;
    if(n == 0) return 1;
    if(x == 1) return 1;
    if(x < 0 && n % 2 == 0) return n;
    if(x < 0 && n % 2 != 0) return -n;
    if(n < 0){
        x = 1/x;
        n = -n;
    }

    while(n > 0){
      if(n % 2 != 0){
         ans *= x;
         x *= x;
      else{
        x *= x;
      }
      }
    }
    
    return 0;
}