#include <iostream>
using namespace std;

int main() {
     int arr[] = {2,3,4,5,6,2};
    
     int size = sizeof(arr)/sizeof(arr[0]);
     int unique[size];
     int e = 0;

     for(int i = 0; i < size;i++){
        bool found = false;
        for(int j = 0;j < e;j++){
            if(arr[i] == arr[j]){
               found = true;
               break;
            }
        }

       if(found == false){
        unique[e] = arr[i];
        e++;
       }
     }
       for (int i = 0; i < e; i++) {
        cout << unique[i] << " ";
    }

    return 0;
}