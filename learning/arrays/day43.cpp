#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {12, 5, 8, 21, 17, 3, 21, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];
    int secondMax = INT_MIN;
    int thirdMax = INT_MIN;

    for(int i = 0;i < n;i++){
        if(arr[i] > max){
            thirdMax = secondMax;
            secondMax = max;
            max = arr[i];
        }

       else if(arr[i] > secondMax && arr[i] < max){
            thirdMax = secondMax;
            secondMax = arr[i];
        }

       else if(arr[i] > thirdMax && arr[i] < secondMax){
            thirdMax = arr[i];
        }
    }

    cout << "Max:" << max << endl;
    cout << "SecondMax:" << secondMax << endl;
    cout << "thirdMax:" << thirdMax << endl;

    return 0;
}