/*
b-a=c-b
2b=a+c, here, a+c>0 already as a,b,c>=1
a=2b-c, here, 2b-c>0 is must
c=2b-a,  here, 2b-a>0 is must

*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if((a+c)%(2*b)==0)
            cout<<"YES"<<endl;
        else if((2*b-c)%a==0 && 2*b-c>0)
            cout<<"YES"<<endl;
        else if((2*b-a)%c==0 && 2*b-a>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
