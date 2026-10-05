#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int expectedSum = 0;
    int originalSum = 0;

for(int i = 0; i < n; i++){
    originalSum += arr[i];
}

for(int i = 1; i <= n + 1; i++){
    expectedSum += i;
}

int missingNums = expectedSum - originalSum;

cout << "MissingNumber: " << missingNums;
    return 0;
}