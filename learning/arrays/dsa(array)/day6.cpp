#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,3,2,1,0};
    int p = arr[0];
    int* a = &arr[0];
    cout << p << endl << a << endl;
    return 0;
}