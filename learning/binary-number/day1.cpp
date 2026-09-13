#include<iostream>
using namespace std;
int main(){
int divNum,divNum2,Binary = 0 ;
int num;
int pow = 1;
cout << "Enter the Number:\n";
cin >> num ;
while(num>0){
     divNum = num % 2;
     divNum2 = num / 2;
     num = divNum2;
     Binary += divNum * pow;
     pow = 10 * pow;
}
cout << "Binary:" << Binary;
    return 0;
}