#include <iostream>
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
    int key;
    cin >> key;

    bool d = 0;
    for (int i = 0; i < n; i++)
    {
        if (key == friday[i])
        {
            cout << key << " is present " << endl;
            d = 1;
            break;
        }
    }
    if (d == 0)
    {
        cout << key << " is  not present " << endl;
    }

    return 0;
}
