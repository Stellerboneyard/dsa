#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, -2, 0, 7, -5, 0, 8, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int posCounter = 0;
    int negCounter = 0;
    int nullCounter = 0;
    for(int i = 0;i < n;i++ ){
        if(arr[i] > 0){
            posCounter++;
        }
        if(arr[i] < 0){
            negCounter++;
        }
        if(arr[i] == 0){
            nullCounter++;
        }
    }
    cout << "PostivNo:" << posCounter << endl;
    cout << "negCounter:" << negCounter << endl;
    cout << "NoofZeros:" << nullCounter << endl;
    return 0;
}