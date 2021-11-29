#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        int sum=0,k=0;

        for(int i=0; i<s.size(); i++)
        {


            if(s[i]=='O')
            {
                k++;
                sum=sum+k;
            }


            else //if(s[i]=='X')
            {
                k=0;
            }



        }

        cout<<sum<<endl;

    }

}
