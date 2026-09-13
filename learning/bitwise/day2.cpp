#include <iostream>
using namespace std;

int main() {
    // 1.loop method

    // int num;
    // int b = 0;
    // cout << "Enter your num:";
    //  cin >> num;
    // if(num <= 0){
    //     cout << "Not power of 2:\n";
    //     return 0;
    // }
    // else if (num == 1){
    //     cout << "Yes power of 2:\n";
    //     return 0;
    // }
 
    // bool ispower = false;

    // for (int i = 2 ; i <= num; i *= 2){
    //    if (num == i){
    //     ispower = true;
    //    }
    // }
    // if (ispower == true){
    //     cout << "Yes is power of 2:\n";
    // }
    // else{
    //     cout << "Not a power of 2:\n";
    // }

  

  //  2.using bitwise operator
    int num;
    int b = 0;
    cout << "Enter your num:";
    cin >> num;
    
  if(num <= 0){
    cout << "Not power of 2!\n";
    return 0;
  }
  else if(num == 1) {
    cout << "Yes power of 2\n";
    return 0;
  }
  else{
     while(num > 1 ){
      if((num & 1) == 1){
        cout << "Not power of 2\n";
        return 0;
      }
      num =num >> 1;
     }
    cout << "Yes prime number\n";
  }


  return 0;
}