#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,c=0,killed=0;
        cin>>n;
        char s[n];

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }

        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='0')
            {
                c++;
            }


            if(s[i]=='0' && s[i+1]=='1' && c%2!=0)
            {
                killed++;
                c=0;
            }
        }

        cout<<killed<<endl;
    }


}
