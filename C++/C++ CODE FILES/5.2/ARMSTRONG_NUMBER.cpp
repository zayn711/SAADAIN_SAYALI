#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p = n, sum = 0;
    while (n > 0)
    {
        int r = n % 10;
        sum += pow(r,3);
        n = n/10;
    }
    if (sum == p)
    {
        cout << p << " is an armstrong number !" <<endl;
    }
    else
    {
        cout << p << " is not an armstrong number !"<<endl;
    }
}