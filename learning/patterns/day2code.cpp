#include <iostream>
using namespace std;

int main(){
int sumOdd = 0;
int n;
cout << "Enter the value of n:" << endl;
cin >> n;
  for(int i = 1 ; i < 2*n ;i++){
    if(i % 2 != 0){
        sumOdd += i;
    }
  }
cout << "Odd sum is "<< sumOdd << endl;

    return 0;
}