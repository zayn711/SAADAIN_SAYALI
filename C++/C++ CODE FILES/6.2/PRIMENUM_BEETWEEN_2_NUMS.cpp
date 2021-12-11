#include <iostream>
#include <math.h>
using namespace std;

int ifprime(int n)
{
    int i;
    bool flag = 0;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        return i;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (ifprime(i))
        {
            cout << i << endl;
        }
    }
}