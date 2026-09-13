#include <iostream>
using namespace std;

int main(){

   int arrA[] = {2,3,4,5,6};
   int arrB[] = {5,6,7,8,9};
   int sizeA = sizeof(arrA)/sizeof(arrA[0]);
    int sizeB = sizeof(arrB)/sizeof(arrB[0]);

    int intersection[sizeA];
   int a = 0;
   for(int i = 0;i < sizeA;i++){
    bool found = false;
    for(int j = 0;j < sizeB;j++){
        if(arrA[i] == arrB[j]){
          found = true;
          break;
       }
    }
    if(found == true){
     intersection[a] = arrA[i];
     a++;
    }
   }
    for(int i = 0;i < a;i++){
        cout << intersection[i] << endl;
    }
    return 0;

}