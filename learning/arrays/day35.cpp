#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {4, 7, 1, 9, 3, 6, 2};
    int target = 10;
     int n = sizeof(arr)/sizeof(arr[0]);
     sort(arr,arr + n);
     int st = 0;
     int end = n - 1;

     while(end >= st){
        if(arr[st] + arr[end] == target){
            cout << arr[st] << " " << arr[end];
            st++;
            end--;
        }
        else if(arr[st] + arr[end] > target){
           end--;
        }
        else if(arr[st] + arr[end] < target){
            st++;
        }
     }
    return 0;
}