#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n*2; j++)
        {
            if ((i+j)%4 == 0)
            {
                cout<<"*";
            }
            else if (i== 2 && (j%4)==0)
            {
                cout<<"*";
            }
            
            else
            {
                cout<<" ";
            }
            
        }
        
    }
}