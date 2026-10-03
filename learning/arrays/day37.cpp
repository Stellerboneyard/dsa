#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 7, 2, 7, 9, 7, 3, 2, 7};
    int target = 7;
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    int index = -1;

    for(int i = 0;i < n;i++ ){
        if(target == arr[i]){
            count++;
        if(count == 2){
            index = i;
         break;
        }
        }
    }
     cout << "Index:" << index;
    return 0;
}