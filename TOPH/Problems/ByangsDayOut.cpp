#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long T;
    cin>>T;
    int a,b,c;

    for(int i=1; i<=T; i++)
    {
        cin>>a>>b>>c;

        if(a+b<c)
        {
            cout<<"No"<<endl;
            continue;

        }




        if(b+c<a)
        {
            cout<<"No"<<endl;
             continue;
        }


        if(c+a<b)
        {
             cout<<"No"<<endl;
              continue;

        }







            cout<<"Yes"<<endl;



    }


}

