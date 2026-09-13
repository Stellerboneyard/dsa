#include<iostream>
using namespace std;

int main(){
   int n;

   bool isPrime = true;
   cout << "Enter the value of n:" << endl;
   cin >> n;

   for(int i = 2;i < n-1 ;i++){
    if(n % i == 0){
        cout << "Number is not Prime\n";
     isPrime = false;
        break;
    }
   }
if (isPrime == true){
    cout << "Number is  Prime\n";
}
return 0;
}