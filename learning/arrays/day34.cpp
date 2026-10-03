#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 4, 6, 8, 10, 13, 15};
    int target = 16;
    int n = sizeof(arr)/sizeof(arr[0]);
    int st = 0;
    int end = n-1;
    while(end >= st){
        if(arr[st] + arr[end] == target){
                cout << arr[end] << " " << arr[st];
                break;
        }
        else if(arr[st] + arr[end] > target){
            end--;
        }
        else if (arr[st] + arr[end] < target){
            st++;
        }
    }
    return 0;
}