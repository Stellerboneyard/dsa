#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 1, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int nums = arr[5];
    bool isfound = 0;

    for(int i = 0;i < n;i++ ){
        for(int j = 0; j < i;j++ ){
            if(arr[i] == arr[j]){
              nums = arr[i];
              isfound = 1;
              break;
            }
            
        }
         if(isfound == 1){
            break;
         }
    }
    cout << "Num:" << nums;

    return 0;
}