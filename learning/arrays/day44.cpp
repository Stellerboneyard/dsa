#include <iostream>
#include <climits>
using namespace std;

int main() {
    
    int arr[] = {8, 7, 5,10,10};
    int n = sizeof(arr)/sizeof(arr[0]);

     int count = 0;
     int max = INT_MIN;
     int secondMax = INT_MIN;
     int thirdMax = INT_MIN;

     for(int i = 0;i < n;i++){
        int x = arr[i];

        if( x > max){
            thirdMax = secondMax;
            secondMax = max;
            max = x;
        }
        else if( x > secondMax || count < 2){
            thirdMax = secondMax;
            secondMax = x;
        }
        else if( x > thirdMax || count < 3){
            thirdMax = x;
        }
        if(count < 3){
            count++;
        }
     }
    cout << "thirdLargest:" << thirdMax << endl;
    cout << "secondLargest:" << secondMax << endl;
    cout << "firstLargest:" << max << endl;

    return 0;
}