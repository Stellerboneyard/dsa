#include <iostream>
using namespace std;

int main() {
    /*int n = 1;
    for(int i = 1;i <= 5;i++){
        for(int j = 1; j <= 5;j++){
            if(i > j){
                cout << " ";
            }
            else{
            cout << n;
            }
        }
        n++;
        cout << endl;
}
        */
int n = 1;
     for(int i = 5; i >= 1 ; i--){
        for(int j = i; j >= 1;j--){
            cout << n << " ";
        }
        n++;
        cout << endl;
     }
    
    return 0;
}