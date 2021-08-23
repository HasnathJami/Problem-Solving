#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
int mod=1e9+7;

int main ()
{
    FASTER

    int T;
    cin>>T;

    while(T--)
    {

        string  s;
        cin>>s;



        int arr[26];
        int maxi=INT_MIN,sum=0,res=0;

        for(int i=0; i<26; i++)
        {
            arr[i]=0;
        }

        for(int i=0; i<s.length(); i++)
        {

            arr[s[i]-97]++;
        }

//        for(int i=0; i<26; i++)
//        {
//            sum=sum+arr[i];
//            maxi=max(maxi,arr[i]);
//        }
//
//        res=sum-maxi;
//
//        if(res==maxi)
//            cout<<"YES"<<endl;
//
//        else
//            cout<<"NO"<<endl;



     for(int i=0; i<26; i++)
        {

            cout<<arr[i]<<" ";
        }


    }


    return 0;

}

