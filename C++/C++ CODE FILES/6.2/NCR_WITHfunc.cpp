#include <iostream>
using namespace std;

int fact(int a){
    
    int f =1;
    for (int i = 2; i <= a; i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,r; cin>>n>>r;
    int ans = (fact(n))/(fact(n-r)*fact(r));
    cout<<ans;
    
}