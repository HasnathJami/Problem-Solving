#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a,int b)
{
    //if(b%a==0) return a;

    if(a==0) return b;

    return gcd(b%a,a);
}

int main()
{
    int N;
    while(cin>>N)
    {
        if(N==0)
            break;
        int G=0;
        for(int i=1; i<N; i++)
        {
            for(int j=i+1; j<=N; j++)
            {
                G+=gcd(i,j);
            }
        }

        cout<<G<<endl;



    }




}

