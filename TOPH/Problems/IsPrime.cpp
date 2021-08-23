#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;

     if(N==2)
        {
            cout<<"Yes"<<endl;
            return 0;

        }

    for(int i=2;i<N;i++)
    {


        if(N%i==0)
        {
            cout<<"No"<<endl;
            break;
        }

        else{
            cout<<"Yes"<<endl;
            break;
        }
    }
}
