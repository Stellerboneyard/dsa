#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 5, 8, 21, 17, 3, 21, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int secMax = arr[0];
    int thirdMax = arr[0];

    for(int i = 0;i < n;i++ ){
        if(arr[i] > max) {

            thirdMax = secMax;

            secMax = max;

            max = arr[i];

        }

        else if(arr[i] > secMax && arr[i] < max) {

            thirdMax = secMax;

            secMax = arr[i];

        }

        else if(arr[i] > thirdMax && arr[i] < secMax) {

            thirdMax = arr[i];

        }
    }

    cout << "secMax:" << secMax;
    cout << "thirdMax:" << thirdMax;

    return 0;
}