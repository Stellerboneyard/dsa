#include <iostream>
using namespace std;

void chgArr(int arr[],int size){
    for(int i = 0 ;i < size ;i++){
        arr[i] = 2 * arr[i];
        cout << "Array:" << arr[i] << " ";
    }
}

int main() {

   int arr[] = {2,3,4};

    chgArr(arr,3);
     
    cout << "\nArray\n";
    for(int i = 0;i < 3;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}