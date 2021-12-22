#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int c=0;

        for(int i=1; i*i<=n; i++)
        {
            c++;

        }

        for(int i=1; i*i*i<=n; i++)
        {
            c++;
        }


        for(int i=1; (i*i)*(i*i)*(i*i)<=n; i++) //Condition for the number which sqaure and cube are equal
        {
            c--;
        }

        cout<<c<<endl;
    }
}
