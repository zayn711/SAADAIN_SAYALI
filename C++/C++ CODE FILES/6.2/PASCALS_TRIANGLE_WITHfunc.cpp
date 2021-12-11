#include <iostream>
using namespace std;

int fact(int a)
{
    int f =1;
    for (int i = 2; i <= a; i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n; cin>>n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<(fact(i))/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
}
