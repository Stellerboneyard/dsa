#include <iostream>
using namespace std;
void Fibonacci(int n){
    int a = 0;
    int b = 1;
    int c = 0;
    cout << "Fibonacci series for nth term:" << endl;
    for(int i = 0; i <= n;i++ ){
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
        
    }
}
int main() {
    Fibonacci(5);
    return 0;
}