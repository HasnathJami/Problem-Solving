#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;

        //if(b>a)
         //   cout<<"impossible"<<endl;
       // else
        //{

            int f=(a+b)/2;
            if((f-abs(a-f))==b)
                cout<<f<<" "<<a-f<<endl;
            else
                cout<<"impossible"<<endl;
        //}
    }
}
