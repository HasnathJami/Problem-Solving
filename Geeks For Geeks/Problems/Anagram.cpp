// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {

        // Your code here

        /*

        // 1st approach

        if(a.size()!=b.size())
        return false;

        unordered_map<int,int> mp;
        int check=0;
        for(int i=0; i<a.size(); i++) // size of string a and b are equal so a.size() can be used in both a and b string
        {
            mp[a[i]-'a']++;
            mp[b[i]-'a']--;
        }



        for(int i=0; i<mp.size(); i++)
        {
            if(mp[i]==0)
            {
                check=1;

            }

            else
            {
                return false;
                //check=0;
            }
        }


        if(check==1)
            return true;



        */



        //2nd Approach

        unordered_map<int,int> mp;
        int check=0;
        for(int i=0; i<a.size(); i++)
        {
            mp[a[i]-'a']++;
        }

        for(int i=0; i<b.size(); i++)
        {

            mp[b[i]-'a']--;
        }

        for(int i=0; i<mp.size(); i++)
        {
            if(mp[i]==0)
            {
                check=1;

            }

            else
            {
                return false;
                //check=0;
            }
        }


        if(check==1)
            return true;



        /*

        //3rd Approach

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        if(a==b)
         return true;

         else
         return false;


         */


    }

};

// { Driver Code Starts.

int main()
{

    int t;

    cin >> t;

    while(t--)
    {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}
// } Driver Code Ends
