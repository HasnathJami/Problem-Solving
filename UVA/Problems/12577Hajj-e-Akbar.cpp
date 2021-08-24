#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=1;
    string s;
    while(s!="*")
    {
        //cin>>s;
        getline(cin,s);

        if(s=="Hajj")
        {
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
            i++;
        }


         if(s=="Umrah")
         {
             cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
             i++;
         }


    }
    return 0;
}
