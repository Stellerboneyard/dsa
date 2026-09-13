#include <iostream>
using namespace std;

int main() {
    int num,digit,decimal = 0;
    int pow = 1;
    cout << "Enter Your Binary Number:\n";
    cin >> num;
    while(num>0){
        digit = num % 10;
        num = num / 10;
        decimal += pow * digit;
        pow *= 2;
    }
     cout << "Decimal:" << decimal;
    return 0;
}