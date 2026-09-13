#include <iostream>
using namespace std;

int main() {
    int n;
    n = 5;
    //top part
    for(int i = 0;i < n;i++){
        //spaces
        for(int j = 0;j <= n-i-1; j++){
            cout << " ";
        }
        cout << "*";
        //second space
    if(i != 0){
        for(int j = 2*i-1;j >= 1;j--){
            cout << " ";
        }
        cout << "*"; 
    }    
    cout << "\n";
    }
    return 0;
}