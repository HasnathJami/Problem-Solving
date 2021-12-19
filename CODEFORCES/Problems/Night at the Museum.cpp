#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int counter,store;

    store=abs(s[0]-'a');

    if(store>13)
    {
        counter=(25%store)+1;
    }
    else
    {
        // counter=(store%25);
        counter=store;
    }


    for(int i=0; i<s.size()-1; i++)
    {
        store=abs(s[i]- s[i+1]);

        if(store>13)
            counter=counter+(25%store)+1;
        else
        {
            // counter=counter+(store%25);
            counter=counter+store;
        }
    }

    cout<<counter<<endl;
}
