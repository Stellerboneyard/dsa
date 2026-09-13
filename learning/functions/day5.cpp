#include <iostream>
using namespace std;
void checkPrime(int n){
    if (n <= 1){
        cout << "Not Prime:\n";
        return;
    }
    bool prime = true;
    for(int i = 2 ; i * i <= n;i++){
        if (n % i == 0){
             prime = false;
            break;
        }
    }
    if(prime){
        cout << "Prime:\n";
    }
    else{
        cout << "Not Prime:\n";
    }
}
int main() {
    checkPrime(89);
    return 0;
}