#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        int counter[2];

        for(int i=0; i<2; i++)
        {
            counter[i]=0;
        }

        counter[b]++;
        counter[c]++;
        counter[d]++;

        if(counter[1]>=counter[0])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


}
