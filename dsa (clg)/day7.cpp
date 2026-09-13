#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
 for (int i = n ; i > 0;i--){
    char a = 'A';
    for (int j = 0; j <= i;j++){
        cout << a;
        a++;
    }
    cout << endl;
 }
    return 0;
}