#include <iostream>
#include <math.h>
using namespace std;

class solution
{
public:
    int div7(int n)
    {
        int store=(7-n%7);

        if(n%7==0)
            return n;

        else if(n%10 + store >=10)
            return (n-n%7);

        else
            return n+store;

    }

};


int main()
{
    int t;
    cin>>t;
    solution obj;

    while(t--)
    {
        int n;
        cin>>n;
        cout<<obj.div7(n)<<endl;

    }
}
