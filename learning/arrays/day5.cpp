#include <iostream>
using namespace std;

void swapArr(int arr[],int size,int end,int start){
while(start < end){
     swap(arr[start],arr[end]);
     start++;
     end--;
}
for(int i = 0;i < size; i++){
    cout << arr[i] << " ";
}
}

int main() {
    int arr[] = {2,3,4,5,6,7};
    int arr1[] = {1,2,3,4,5,6,7};

    int size = sizeof(arr1)/sizeof(int);
    int end = size - 1;
    int start = 0;

    swapArr(arr1,size,end,start);
    return 0;
}