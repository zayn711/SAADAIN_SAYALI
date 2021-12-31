#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int friday[n];
    for (int i = 0; i < n; i++)
    {
        cin >> friday[i];
    }
    int a = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        a = max(a, friday[i]);
        cout << a << " ";
    }

    return 0;
}
