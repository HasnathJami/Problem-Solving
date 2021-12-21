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
        int len=s.size();
        int mid=len/2;

        if(len%2!=0)
        {
            cout<<"NO"<<endl;
        }

        else
        {

            string s1,s2;

            for(int i=0; i<mid; i++)
            {
                s1+=s[i];
            }

            for(int i=mid; i<len; i++)
            {
                s2+=s[i];
            }

            if(s1==s2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;


        }


    }

}
