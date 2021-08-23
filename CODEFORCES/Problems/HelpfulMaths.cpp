#include <bits/stdc++.h>
using namespace std;

int main()

{
    char s[100];
    string x,xt,xNew;
    string  p="+";
    char q='+';
    cin>>s;



    sort(s,s+strlen(s));

    for(int i=0;i<strlen(s);i++)
    {

            x+=s[i];

    }

    cout<<x<<endl;

       xt= x.substr(ceil(x.size()/2),x.size());

//    cout<<xt<<endl;


 char v[100];

    for(int i=0,j=0;i<x.size(),j<x.size();i++,j++)
    {

////
//               if(i%2==0)
//                xNew[i]+=xt[i];
////               xt[i]="+";
//                if(i%2!=0)
//                    xNew[i]+=p[0];

                 xNew[i]+=xt[j];
//                 i++;
//                 xNew[i]+=q;



   }

    cout<<xNew<<endl;
}
