#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n,countA=0,countD=0;
    char s;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>s;

        if(s=='A')
            countA++;

        else if (s=='D')
            countD++;
    }

    if(countA==countD)
    {
        cout<<"Friendship"<<endl;
    }

    else if(countA>countD)
    {
        cout<<"Anton"<<endl;
    }

    else if(countA<countD)
    {
        cout<<"Danik"<<endl;
    }

    return 0;
}
