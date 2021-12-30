#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int friday[n];

    for (int i = 0; i < n; i++)
    {
        cin>>friday[i];
    }
    int counter=1;
    while (counter<n)
    {
        for (int i = 0; i < n-counter; i++)
        {
            if (friday[i]>friday[i+1])
            {
                int temp = friday[i];
                friday[i] = friday[i+1];
                friday[i+1] = temp;
            }
            
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<friday[i]<<" ";
    }
}
