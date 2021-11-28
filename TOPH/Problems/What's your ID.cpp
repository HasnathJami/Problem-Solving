#include <iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        string s1=s.substr(4,3);

        if(s1=="115")
            cout<<"CSE ";
        else if(s1=="111")
            cout<<"Economics ";
        else if(s1=="141")
            cout<<"EEE ";
        else if(s1=="116")
            cout<<"BBA ";
        else if(s1=="117")
            cout<<"LLB ";
        else if(s1=="114")
            cout<<"English ";

        string s2=s.substr(2,1);


        if(s2=="1")
            cout<<"Spring 20";
        else if(s2=="2")
            cout<<"Summer 20";
        else if(s2=="3")
            cout<<"Autumn 20";

        string s3=s.substr(0,2);
        cout<<s3<<endl;


    }


}
