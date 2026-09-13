#include <iostream>
using namespace std;
int printBye(){
    cout << "Bye\n";
    return 4;
}
void printHello(){
   cout << "Hello world\n";
   int a = printBye();
   cout << a;
}
int main() {
    
    cout << printBye() << endl;
    return 0;
}