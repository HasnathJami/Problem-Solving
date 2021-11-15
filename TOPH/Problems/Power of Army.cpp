#include <iostream>
#include <climits>
using namespace std;

int maxx(int a,int b)
{
    //return a ? a>b : return b;
    if(a>b)
        return a;
    else
        return b;
}

int minn(int a,int b)
{
    //return a ? a<b : b;
    if(a<b)
        return a;
    else
        return b;

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,maxi=INT_MIN,mini=INT_MAX;
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            maxi=maxx(maxi,a[i]);
            mini=minn(mini,a[i]);

        }

        cout<<maxi-mini<<endl;

    }



}
