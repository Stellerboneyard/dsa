
#include <iostream>
using namespace std;

int main()
{
    int num, i;
    bool prime = true;

    cout << "Enter an integer: ";
    cin >> num;

    if (num <= 1)
    {
        prime = false;
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                prime = false;
                break;
            }
        }
    }

    if (prime)
        cout << num << " is a Prime Number";
    else
        cout << num << " is Not a Prime Number";

    return 0;
}