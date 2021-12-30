#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int friday[n];

    for (int i = 0; i < n; i++)
    {
        cin>>friday[i];
    }

    for (int i = 1; i < n; i++)
    {
        int current = friday[i];
        int j = i-1;
        while (friday[j]>current && j>=0)
        {
            friday[j+1]=friday[j];
            j--;
        }
        friday[j+1]=current;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<friday[i]<<" ";
    }
    
}
