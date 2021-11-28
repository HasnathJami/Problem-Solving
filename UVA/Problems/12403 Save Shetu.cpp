#include <iostream>
using namespace std;

int main()
{
    int t,sum=0;
    cin>>t;

    while(t--)
    {
        int n;
        string s1;
        cin>>s1;


        if(s1=="donate")
        {
            cin>>n;
            sum=sum+n;

        }

        else if(s1=="report")
        {

            cout<<sum<<endl;
        }

    }



}
