#include <iostream>
using namespace std;
void printPrime(){
    

      for(int i = 2; i <= 100;i++){
            bool prime = true;
        for(int j = 2;j * j <= i ;j++){
             if(i % j == 0){
                prime = false;
                break;
             }
     }
if(prime){
        cout << i << " ";
       } 
}
}
int main() {
    printPrime();
    return 0;
}