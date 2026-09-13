#include <iostream>
using namespace std;

int main() {
    //printing alphabets
   /*char ch = 'A';
    for(int i = 1; i <= 5; i++){
        for(int j = 1 ;j <= 6 ;j++){
         if(ch >= 'A' && ch <= 'Z'){
            cout << ch << " ";
            ch++;
         }
        }
        cout << endl;
    }*/ 
    //printing numbers
    int n;
    cout << "Enter the number of rows:\n";
    cin >> n;
    int a = 1;
    for(int i = 1;i <= n; i++){
        for(int j = 1;j <= n-1; j++){
         cout << a <<  " " ;
         a++;
        }
        cout << "\n";
    }

    return 0;
}