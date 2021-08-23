#include <iostream>
using namespace std;
int main()
{
    int n,k,counter=0,p;
    int a[100];

    cin>>n>>k;




    for(int i=1; i<=n; i++)
    {
        cin>>a[i];

    }


    for(int i=1; i<=n; i++)
    {
        p=a[k];

        if(a[i]>=p && a[i]>0)

            counter++;

    }







    cout<<counter<<endl;


    return 0;
}
