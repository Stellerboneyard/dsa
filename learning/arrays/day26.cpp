#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, -1, 5, -3, 4, -2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int st = 0;
    for(int i = 0; i < n;i++ ){
      if(arr[i] < 0){
        swap(arr[i],arr[st]);
        st++;
      }
    }
      for(int i = 0;i < n;i++ ){
        cout << arr[i] << " ";
      }
    
    return 0;
}