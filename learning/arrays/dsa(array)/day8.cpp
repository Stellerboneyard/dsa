#include <iostream>
using namespace std;
    int max(int arr[],int size){
        int maxIndex = 0;
       int max = arr[0];
       for(int i = 0; i < size;i++){
        if(max < arr[i]){
            max = arr[i];
           maxIndex = i;
        }
       }
       return maxIndex;
    }

     int min(int arr[],int size){
        int minIndex = 0;
       int min= arr[0];
       for(int i = 0; i < size;i++){
        if(min > arr[i]){
           min = arr[i];
            minIndex = i;
        }
       }
       return minIndex;
    }
     void swap(int &a,int &b){
        int temp;
        temp = a;
        a = b;
        b = temp;
     }



int main() {
    int sizeA;
    int sizeB;

    int arrA[] ={3,5,7,9};
    int arrB[] ={2,4,6,8};

    sizeA = sizeof(arrA)/sizeof(int);

   int a = min(arrA,sizeA);
   int b = max(arrA,sizeA);

   for(int i = 0;i < sizeA; i++){
    cout << arrA[i] << " ";
  }
      
  swap(arrA[a],arrA[b]);
    
  for(int i = 0;i < sizeA; i++){
    cout << arrA[i] << " ";
  }
    return 0;
}