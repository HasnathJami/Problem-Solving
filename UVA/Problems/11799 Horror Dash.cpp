#include <iostream>
using namespace std;

int maxx(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int n,maxi=0;
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            maxi=maxx(a[i],maxi);

        }

        cout<<"Case "<<i<<": "<<maxi<<endl;
    }
}
