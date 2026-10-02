#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 0, 2, 0, 8, 0, 3, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int st = 1;
    for(int i = 1;i < n;i++ ){
        if(arr[i] != 0){
            swap(arr[i],arr[st]);
            st++;
        }
    }
    for(int i = 0;i < n;i++ ){
        cout << arr[i] << " ";
    }
    return 0;
}