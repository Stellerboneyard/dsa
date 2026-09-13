#include<iostream>
using namespace std;
int Fact(int n){
     int fact = 1;
    for(int i = 1;i <= n;i++){   
    fact *= i;
    }
    cout << "Fact:" << fact << "\n";
    return fact;
    }

int main(){
 int a = Fact(5);   
cout << "a = " << Fact(5) << endl;
    return 0;
}