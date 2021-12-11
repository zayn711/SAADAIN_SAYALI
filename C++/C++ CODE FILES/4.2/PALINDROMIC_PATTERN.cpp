#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int j
        for (int j = 1 ;j <= n-i ; j++)
        {
            cout<<"  ";
        }
        int k = i;
        for (; j <= n; j++)
        {
            cout<<k--<<" ";
        }
        for (int j = 2; j <= i ; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}