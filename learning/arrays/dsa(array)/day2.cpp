#include <iostream>
using namespace std;

int main() {
    int n,minIndex,maxIndex;
    cout << "Enter the number of marks:";
    cin >> n;

    int marks[6] ={5,15,22,1,-15,24};
    int min1 = marks[0];
    int max2 = marks[0];

    // for min
    for(int i = 0;i < n;i++){
        if (min1 > marks[i]){
            min1 = marks[i];
            minIndex = i;
        }
    }
    // for max
    for(int i = 0;i < n;i++){
        if (max2 < marks[i]){
            max2 = marks[i];
            maxIndex = i;
        }
    }
    // for(int i = 0;i < n;i++){
    //    min1 = min(marks[i],min1);
    // }
    cout << "Min:" << min1 << endl;
    cout << "Max:" << max2 << endl;

    cout << "minIndex:" << minIndex << endl;
    cout << "maxIndex:" << maxIndex << endl;
    
    // int a = INT_MAX;
    // int b = INT_MIN;
    // cout << a << b << endl;

    return 0;
}