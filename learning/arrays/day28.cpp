#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int st = 1;
    for(int i = 1;i < n;i++ ){
        if(arr[i] != arr[st - 1]){
         arr[st] = arr[i];
        st++;
        }
    }
    for(int i = 0;i < st;i++){
        cout << arr[i] << " ";
    }
    return 0;
} 