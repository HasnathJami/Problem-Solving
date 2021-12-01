#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int n,hj=0,lj=0;
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])

            {
                lj++;
            }

            else if(a[i]<a[i+1])
            {
                hj++;
            }
        }

        cout<<"Case "<<i<<": "<<hj<<" "<<lj<<endl;
    }
}
