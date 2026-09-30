#include <iostream>
using namespace std;

int main() {
     int arr[] = {2, 7, 4, 9, 6, 3};
     int n = sizeof(arr)/sizeof(arr[0]);
     int count = 0;

     for(int i = 0;i < n;i++ ){
        if(arr[i] % 2 == 0){
          count++;
        }
     }
     cout << "Number of even:" << count << endl;
    return 0;
}