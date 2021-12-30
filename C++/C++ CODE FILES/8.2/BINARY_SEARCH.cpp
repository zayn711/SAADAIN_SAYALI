#include <iostream>
using namespace std;

int binarysearch(int n, int friday[], int key)
{
    int s = 0, e = n;
    for (int i = 0; i < n; i++)
    {
        int mid = (s + e) / 2;
        while (s < e)
        {
            if (friday[mid] == key)
            {
                cout << i << endl;
            }
            else if (friday[mid] < key)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    
}
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

    cout<<binarysearch(n, friday, key);
}
