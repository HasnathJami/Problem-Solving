#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl  "\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)

int main ()
{
    FASTER
    string s1,s2;
    cin>>s1;

     for(int i=0;i<s1.size();i++)
    {
      s1[i]=tolower(s1[i]);
    }
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='y')
        {
            continue;
        }
        else{

            s2=s2+'.';
            s2=s2+s1[i];
        }
    }

    cout<<s2<<endl;


    return 0;

}

