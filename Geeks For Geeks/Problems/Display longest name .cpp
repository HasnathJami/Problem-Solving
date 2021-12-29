#include <iostream>
using namespace std;

class Solution
{

public:

    string longest(string names[],int n)
    {
        int maxi=-1;
        int store=0;

        for(int i=0; i<n; i++)
        {
            int len=names[i].size();
            if(len>=maxi)
            {
                maxi=len;
                store=i;
            }
        }

        //cout<<names[store]<<endl;
        return names[store];

    }


};

int main()
{
    int n;
    cin>>n;

    string s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    Solution ob;

    cout<<ob.longest(s,n)<<endl;

}


