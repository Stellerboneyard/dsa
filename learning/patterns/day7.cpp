#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i = 0;i < n; i++){
        //space
         for(int j = 0; j < n-i-1 ;j++){
            cout << " ";
         }
         //triangle
         for(int j = 1; j <= i+1;j++){
         cout << j;
         }
         //triangle
        for(int j = i; j > 0; j--){
            cout << j;
         }
          cout <<"\n";
    }
    return 0;
}