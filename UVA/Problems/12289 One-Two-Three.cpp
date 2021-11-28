#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        if(  (s[0]=='o' && s[1]=='n') || (s[1]=='n' && s[2]=='e') ||(s[0]=='o' && s[2]=='e')  && s.size()==3  )
            cout<<"1"<<endl;

        else if(  (s[0]=='t' && s[1]=='w') || (s[1]=='w' && s[2]=='o') ||(s[0]=='t' && s[2]=='o')  && s.size()==3  )
            cout<<"2"<<endl;

        else
            cout<<"3"<<endl;

    }

}
