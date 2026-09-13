#include<iostream>
using namespace std;
int sumOfNum(int number){
    int digit;
    int sum = 0;
    for(;number != 0;number /= 10){
        digit = number % 10;
        sum += digit; 
    }
    return sum;
}
int main(){
   int a = sumOfNum(2345);
   cout << a;
    return 0;
}