#include<iostream>
#include<cstdio>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int n;

// Read and solve for every integer present in input.txt until EOF
while (cin >> n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}
    return 0;
}