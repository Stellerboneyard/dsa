#include <iostream>
using namespace std;
int BinoCalc(int n,int r){
    int s = (n-r);
    int binomialCoff = 1 ;
    int fact_n = 1;
    int fact_r = 1;
    int fact_s = 1;
for (int i = 1;i <= n;i++){
    fact_n *= i;
}
for(int i = 1;i <= r;i++){
    fact_r *= i;
}
for(int i = 1;i <= s;i++){
    fact_s *= i;
}
binomialCoff = fact_n /(fact_r * fact_s);
return binomialCoff;
}
int main() {
  int a = BinoCalc(8,2);
  cout << a << endl;
    return 0;
}