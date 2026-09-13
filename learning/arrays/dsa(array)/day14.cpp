#include<iostream>
#include<vector>
using namespace std;
int main(){
   int arr[] = {2,3,4,5,-4,9,-8};
   vector <int> vec;
   int n = sizeof(arr)/sizeof(arr[0]);
   int maxSum = INT_MIN;
   int curSum = 0;

   int sta = 0;
   int end = 0;
   
     for(int i = 0; i < n; i++){
        curSum += arr[i];
        maxSum = max(maxSum,curSum);

        if(curSum < 0){
            curSum = 0;
        }
      
       
     }
     for(int val : vec){
        cout << val << " ";
     }

    return 0;
}