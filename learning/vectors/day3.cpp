#include <iostream>
#include <vector>
using namespace std;

vector<int> Unique(vector<int>& vec){
     vector<int> unique;
     for(int val : vec){
           bool isfound = false;
              for(int val1 : unique){
                if(val == val1){
                  isfound = true;
                }
              }
              if(isfound == false){
                unique.push_back(val)
              }
     }
     return unique;
}

int search (vector<int>& vec,int target){
    bool isfound = false;
    int a = 0;
      for(int val : vec){
        if(val == target){
             isfound = true;
             return a;
        }
        a++;
}
return -1;
}


int main() {
    vector<int> a;
    vector <int> b;
    int target;

    cout << "Enter the number to be searched:";
    cin >> target;

    a ={3,4,6,6,5,4,2,4,4,5,6,8,1};
    
    b = unique(a);

    search(b,target);
    
    return 0;
}