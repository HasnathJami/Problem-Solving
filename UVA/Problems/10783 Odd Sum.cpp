#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b,sum=0;
        cin>>a;
        cin>>b;

        for(int i=a;i<=b;i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }

        cout<<"Case "<<i<<": "<<sum<<endl;
    }
}
