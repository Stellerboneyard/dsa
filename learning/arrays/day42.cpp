 #include <iostream>
 #include <climits>
 using namespace std;
 
 
 int main() {
     int arr[] = {7, 2, 9, 4, 9, 5};
     int n = sizeof(arr)/sizeof(arr[0]);

     int max = arr[0];
     int secondMax = INT_MIN;

     for(int i = 0;i < n;i++){
        if(arr[i] > max){
            secondMax = max;
            max = arr[i];
        }
        if (secondMax < arr[i] && arr[i] < max){
            secondMax = arr[i];
        }
     }
     cout << "Max:" << max << endl;
     cout << "secondMax:" << secondMax << endl;
     return 0;
 }