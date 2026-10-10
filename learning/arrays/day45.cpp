#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 0;i <= n;i++){
        for(int j = 0;j <= i;j++){
            cout << "*";
        }
       for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    for(int i = n - 1;i >= 0;i-- ){
        for(int j = i;j >= 0;j--){
            cout << "*";
        }
        for(int j = 2 * (n-i);j > 0;j--){
             cout << " ";
        }
        for(int j = i;j >= 0;j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}