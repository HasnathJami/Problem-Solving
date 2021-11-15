#include <iostream>
using namespace std;

int decToBin(int n)
{
    int c=0;
    while(n>0)
    {
        if(n%2==1)
        {
            c++;
        }
        n=n/2;
    }


    return c;

}

int main()
{
    int n;
    cin>>n;
    int rec=decToBin(n);

    for(int i=0; i<=n; i++)
    {
        if(decToBin(i)==rec)
        {
            cout<<i<<endl;
            break;
        }
    }

}
