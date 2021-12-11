#include <iostream>
#include <math.h>
using namespace std;

int bin(int a){
    //100101
    int s = 0;
    int i = 1; 
    while (a>0)
    {
        int m=a%10;
        s += i*m;
        i *=2;
        a/=10;
    }
    return s;
    
}
int main()
{
    int n; cin>>n;
    cout<<bin(n);
} 