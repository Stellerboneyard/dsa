#include <iostream>
using namespace std;

int main() {
    bool isfound = false;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0;i < n - 1;i++ ){
        if(arr[i] > arr[i + 1] ){
            isfound = true;
            break;
        }
    }
    if(isfound == true){
        cout << "unsorted" << endl;
    }
    else{
        cout << "sorted" << endl;
    }
    return 0;
}