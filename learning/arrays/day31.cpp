#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 2, 9, 2, 4, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int count = 0;
    for(int i = 0;i < n;i++ ){
        if(arr[i] == 2){
            count++;
        }
    }
    cout << count;
    return 0;
}