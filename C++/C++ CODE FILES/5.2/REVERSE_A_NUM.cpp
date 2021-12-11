#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //4321
    int q = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        q = q * 10 + lastdigit;

        n = n / 10;
    }
    cout << q << endl;
}