#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    string v,k;
    string alphabhets="abcdefghijklmnopqrstuvwxyz";


    cin>>v;

    transform (v.begin(),v.end(),v.begin(),::tolower);
    k=v;



//    cout<<"Initial Value of K: "<<k<<endl;
    for(int i=0; i<n; i++)
    {

        for(int j=i+1; j<n; j++)
        {
            if(v[i]==k[j])
            {

                k[j]='1';

            }

        }
    }

//     cout<<"Before Sorting: "<<k<<endl;


    sort(k.begin(),k.end());
//    cout<<"After Sorting: "<<k<<endl;

//    cout<<"Size of K:"<<k.size()<<endl;
    for(int i=0; i<k.size(); i++)
    {
        if(k[i]=='1')
            c++;

    }

    k.erase(0,c); // (FirstRangeOfIndexindexYouWantToRemove,last range/how many values your want to erase)
//    cout<<"AFter erase zeroes:"<<k<<endl;


//     cout<<"AFter transform:"<<k<<endl;


    if(k==alphabhets)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;




}

