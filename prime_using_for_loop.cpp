#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            count++;
            break;
        }
    }

    if(count == 0 && n > 1)
    {
        cout << n << " is a Prime Number";
    }
    else
    {
        cout << n << " is Not a Prime Number";
    }

    return 0;
}
