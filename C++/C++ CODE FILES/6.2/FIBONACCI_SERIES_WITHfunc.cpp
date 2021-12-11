#include <iostream>
#include <math.h>
using namespace std;

int fibo (int n)
{
    int t1 =0, t2 = 1;
    for (int i = 1; i <= n; i++)
    {
        cout<<t1<<endl;
        int nt =  t1 + t2 ;
        t1 =t2; t2 = nt;
    }
    
    
}

int main()
{
    int n; cin>>n;

    fibo(n);
}