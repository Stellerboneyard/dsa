#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {4, 8, 2, 9, 7, 5, 9};
    bool isfound = false;
    vector <int> indices;

    int n = sizeof(arr)/sizeof(arr[0]);
    int target;

    cout << "Enter target to be searched:" << endl;
    cin >> target;

    for(int i = 0;i < n;i++ ){
        if(arr[i] == target){
           isfound = true;
           indices.push_back(i);
        }
    }
    if(isfound == 1){
        for(int val: indices){
        cout << "Found! at index:" << val << endl;
        }
    }
    else{
        cout << "Not found!" << endl;
    }

    return 0;
}