#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,XI,YI;
    cin>>T;
    int avg=0;

    for(int i=0; i<T; i++)
    {
        cin>>XI>>YI;

        avg=(XI+YI)/2;

        if(avg%2==0)
        {
            cout<<"Sadia will be happy."<<endl;
        }
        else
        {
            cout<<"Oops!"<<endl;

        }
    }

}
