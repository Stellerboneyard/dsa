#include <iostream>
using namespace std;

int main()
{
    bool prime;

    for (int num = 10; num <= 90; num++)
    {
        prime = true;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
        {
            cout << num << " ";
        }
    }

    return 0;
}