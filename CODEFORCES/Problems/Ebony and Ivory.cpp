#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;


    for(int i=0; i<10000; i++)
    {
        int s1=(c-(a*i));
        if(s1%b==0 && s1>0)
        {
            cout<<"Yes"<<endl;
            return 0;
        }

    }

    for(int i=0; i<10000; i++)
    {
        int s2=(c-(b*i));
        if(s2%a==0 && s2>0)
        {
            cout<<"Yes"<<endl;
            return 0;
        }

    }

    cout<<"No"<<endl;





}
