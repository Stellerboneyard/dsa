#include <iostream>
using namespace std;

int main() {
    int a,b;
    int binary = 0;
    cout << "Enter your number:";
    cin >> a;

    while(a > 0){
        b = a % 2;
        a = a / 2;
        binary = b + 10 * binary; 
    }
    cout << "binary :" << binary << endl; 
     


    return 0;
}