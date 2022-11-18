#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int a=ceil((float)N/3);
    int b=ceil((float)N/3);
    int c=N-(a+b);

    if((a>0 && b>0 && c>0) && ((a+b>c) || (a+c>b) || (b+c>a))  )
    {
        if(a==b && b==c)
        {
            cout<<"Equilateral"<<endl;
        }
        else if((a==b && b!=c) || (b==c && c!=a) || (a==c && c!=b) )
        {
            cout<<"Isosceles"<<endl;
        }
    }

    else
    {
        cout<<"Invalid"<<endl;
    }

}
