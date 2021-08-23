#include <bits/stdc++.h>
using namespace std;

int main()
{

    int s=0,a=0,b=0,c=0,d=0,y=0;
    cin>>y;
    while(true)
    {
        y++;
        s=y;
        a=s/1000;
        s=s%1000;
        b=s/100;
        s=s%100;
        c=s/10;
        s=s%10;
        d=s;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout<<a<<b<<c<<d<<endl;
            break;
        }


    }

}
