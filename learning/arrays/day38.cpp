#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 2, 4, 9, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ans = arr[0];

    for(int i = 0;i < n;i++ ){
            int count = 0;
        for(int j = 0;j < n;j++ ){
          if(arr[i] == arr[j]){
                count++;
          }
    }
    if(count == 1){
        ans = arr[i];
        break;
    }
}
    cout << "ans:" << ans;
    return 0;
}