#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int st = 0;
    int end = n-1;

    while(st <= end){
        int temp;
        temp = arr[st];
        arr[st] = arr [end];
        arr[end] = temp;
        st++;
        end--;
    }
    for(int i = 0 ; i < n;i++ ){
        cout << arr[i] << " ";
    }
    return 0;
}