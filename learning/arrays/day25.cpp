#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int st = 0;
    int trt = 1;

    for(int i = 0;i < n;i++ ){
      if(arr[i] != 0){
        swap(arr[i],arr[st]);
        st++;
      }

    }
    
for(int i = 0;i < n ; i++){
    cout << arr[i] << " ";
}

    return 0;
}