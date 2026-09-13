#include <iostream>
#include <vector>
using namespace std;


int main() {
    int target;
    vector<int> vec;

    int arr[] = {3,5,7,11};
    target = 14;

    int size = sizeof(arr)/sizeof(arr[0]);

    int st = 0;
    int end = size - 1;
    
    for( ;st < end;){
        if(arr[st] + arr[end] == target){
             vec.push_back(arr[st]);
             vec.push_back(arr[end]);
             break;
        }
         else if(arr[st] + arr[end] < target){
            st++;
        }
         else if(arr[st] + arr[end] > target){
            end--;
        }
    }
    cout << "pairs are " << vec.at(0) << " and " << vec.at(1) << endl;

    return 0;
}
for ( int vec : nums){ 
}
for (int i = 0; i < size ;i++){

}