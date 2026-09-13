#include <iostream>
using namespace std;

int main() {
    int n = 5;
    //top part
    for(int i = 0;i < n;i++){
       //space
       for(int j = n-i-1; j > 0;j--){
                cout << " ";
       }
       cout << "*";

       if(i != 0){
        for(int j = 1;j <= 2*i-1;j++){
           cout << " ";
        }
         cout << "*";
       }
       cout << "\n";
    }
    //bottom part
    for(int i = 0;i < n - 1;i++){
     for(int j = 0;j <= i;j++){
        cout << " ";
     }   
     cout << "*";
    
     if(i != n-2){
        for(int j = 2*(n-i)-5;j > 0 ; j--){
            cout << " ";
        }
        cout << "*";
     }
     cout <<"\n";
    }
    return 0;
}