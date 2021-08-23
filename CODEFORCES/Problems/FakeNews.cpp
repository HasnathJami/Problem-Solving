#include <bits/stdc++.h>
using namespace std;

int main()

{
    char s[1000];
    char x[6]="heidi";
    int j=0;
    cin>>s;

    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]==x[j])
        {
            j++;
        }




    }

    if(j==strlen(x))
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;






}
