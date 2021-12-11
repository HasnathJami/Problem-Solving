#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int j=0;

    for(int i=s.size()-1; i>=0; i--)
    {
        j++;
        if(j==3 && i>0)
        {
            s.insert(i,",");
            j=0;

        }

    }

    cout<<s<<endl;
}
