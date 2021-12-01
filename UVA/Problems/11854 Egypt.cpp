#include <iostream>
using namespace std;

int main()
{
    int a,b,c;


    while(cin>>a>>b>>c)
    {
        int maxi=max(c,max(a,b));
        int mini=min(c,min(a,b));
        int mid=(a+b+c)-maxi-mini;


        if(a==0 && b==0 && c==0)
            break;

        if((mini*mini)+ (mid*mid)==(maxi*maxi))
            cout<<"right"<<endl;

        else
            cout<<"wrong"<<endl;
    }
}
