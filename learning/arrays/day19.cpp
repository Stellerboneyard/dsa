#include <iostream>
using namespace std;

int main() {
    int arr[] = {8,3,11,2,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min = arr[0];
    for(int i = 0;i < n;i++ ){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Min:" << min << endl;
    return 0;
}