#include <iostream>
using namespace std;

int main() {
    int searchedVal;

    cout << "Enter value to be searched:";
    cin >> searchedVal;

    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i < size;i++){
        if(arr[i] == searchedVal){
            cout << "Found\n";
            found = true;
            return 0;
        }
    }

    cout << "Not found\n";
    
    return 0;
}