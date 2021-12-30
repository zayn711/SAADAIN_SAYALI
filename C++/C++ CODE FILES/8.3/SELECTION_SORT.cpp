#include <iostream>
using namespace std;
int SelectionSort(int n, int friday[])
{

    // 7 3 5 22 11 44 69
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (friday[j] < friday[i])
            { 
                int tem = friday[j];
                friday[j] = friday[i];
                friday[i] = tem;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        cout<<friday[i]<<" ";
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
    cout<<SelectionSort(n, friday);
}
