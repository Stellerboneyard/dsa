#include <iostream>
using namespace std;
// void change(vector <int>& vec){
//     vec[0] = 100;
// }

// void change(vector <int> *vec){
//        (*vec)[0] = 100;
// }

int main() {
    // int a = 9;
    // int *p = &a;
    // cout << a << endl << p << endl;
    // cout << &a << endl << *p;
    
    vector<int> a;
    a.push_back(4);
    a.push_back(3);

    // change(&a);

    cout << a.at(0)<< endl;
    return 0;
}