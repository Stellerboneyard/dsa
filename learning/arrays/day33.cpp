#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 6, 8, 9};
    int target = 10;

    int n = sizeof(arr)/sizeof(arr[0]);

    int st = 0;
    int end = n - 1;

    while(st <= end){
        if(arr[st] + arr[end] == 10){
            cout << arr[st] << " " << arr[end] << endl;
            break;
        }
        else if(arr[st] + arr[end] > 10){
            end--;
        }
        else if(arr[st] + arr[end] < 10){
            st++;
        }
    }

    return 0;
}