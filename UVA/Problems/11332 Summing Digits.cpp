#include <iostream>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        if(n==0) break;

        if(n/10==0)
        {
            cout<<n<<endl;
            continue;
        }

        int t=n,sum=0;

        while(t>0)
        {
            sum=sum+(t%10);
            t=t/10;


            if(sum/10!=0 && t==0)
            {
                t=sum;
                sum=0;
            }


        }

        cout<<sum<<endl;


    }

}
