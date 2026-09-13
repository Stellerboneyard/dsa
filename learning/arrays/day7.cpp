#include <iostream>
using namespace std;

int sumArr(int size,int arr[]){
    int sum = 0;
    for(int i = 0;i < size;i++){
        sum += arr[i];
    }
    return sum;
}

int proArr(int size,int arr[]){
     int product = 1;
     for(int i = 0;i < size;i++){
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[] = {4,3,5,2,6,7,3};
    int size = sizeof(arr)/sizeof(int);

 int a =   sumArr(size,arr);
  int b =   proArr(size,arr);
  
  cout << a << " " << b << endl;

    return 0;
}