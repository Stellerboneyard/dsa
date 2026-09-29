#include <iostream>
using namespace std;

int main() {
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);

   int bestBuy = arr[0];
   int maxProfit = 0;

    for(int i = 1;i < n;i++){
        if(arr[i] > bestBuy){
            maxProfit = max(maxProfit,arr[i] - bestBuy);
        }
      bestBuy = min(bestBuy,arr[i]);
    }
    cout << "ans:" << maxProfit;
    return 0;
}