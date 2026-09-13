#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector <int> vec;
    int arr[] = {4, -1, 2, 1, -5, 4, -3, 2, 6, -1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int currSum = 0;
    int maxSum = INT_MIN;

    int tempstart = 0;
    int start = 0;
    int end = 0;

    for(int i = 0;i < n;i++){

      if(currSum == 0){
        tempstart = i;
      }
      currSum += arr[i];

      if(currSum > maxSum){
        maxSum = currSum;
        start = tempstart;
        end = i;
      }
      if(currSum < 0){
        currSum = 0;
      }
    }
    for(int i = start ; i <= end ; i++){
        vec.push_back(arr[i]);
    }
    for(int val : vec){
        cout << val << " ";
    }

    return 0;
}