#include <iostream>
using namespace std;

int main() {
    int n = 6;
    for(int i = 0;i < n ;i++){
        // print 0
        for(int j = 0 ;j < n;j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
                cout << "*";
            }
            else{
                    cout << " ";
            }
        //print 
            }
            cout << "\n";
        }
    return 0;
}