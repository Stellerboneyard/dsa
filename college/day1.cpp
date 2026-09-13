#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, digits = 0;
    int remainder;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Count number of digits
    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = num;

    // Calculate sum of digits raised to the power of digits
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}