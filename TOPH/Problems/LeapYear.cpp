#include <bits/stdc++.h>
using namespace std;


int main()
{
    int Y;
    cin>>Y;

    if (  (Y%4==0) && ((Y%400==0)    || (Y%100!=0) )  ) // Correct formula of leap year
   // if(Y%4==0 && Y%400!=0 )
    {
        cout<<"Yes"<<endl;
    }

     else
    {
        cout<<"No"<<endl;
    }
}
