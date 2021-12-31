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

    int pd = friday[1] - friday[0];
    int curr = 2;
    int ans = 2;
    int j = 2;

    while (j < n)
    {
        if (pd == friday[j] - friday[j - 1])
        {
            curr++;
            ans = max(curr, ans);
        }
        else
        {
            pd = friday[j] - friday[j - 1];
            curr = 2;
        }
        j++;
    }
    cout << ans;
}
