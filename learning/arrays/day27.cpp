#include <iostream>
using namespace std;

int main() {
    int arr[] = {7, 3, 8, 1, 6, 9, 4, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int st = 0;
    for(int i = 0;i < n;i++ ){
        if(arr[i] % 2 == 0){
            swap(arr[i],arr[st]);
            st++;
        }
    }
for(int i = 0;i < n;i++){
    cout << arr[i] << " ";
}
    
    return 0;
}