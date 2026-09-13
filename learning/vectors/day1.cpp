#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec;
    vec = {3,4};

    vec.push_back(40);
    
    // for(int num: vec){
    //     cout << num << " ";
    // }
    vec.pop_back();
    
    for(int num:vec){
        cout << num << " ";
    }

    cout << "\n" << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.size();
    cout << vec.at(2) << endl;

    return 0;
}