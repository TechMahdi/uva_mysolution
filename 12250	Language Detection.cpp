

#include<bits/stdc++.h>



using namespace std;
int main()
{

    string s;
    int i=1;
        while(cin>>s)
        {

            if(s=="HELLO")
            {
                cout<<"Case "<<i<<": ";
                cout<<"ENGLISH"<<endl;
            }
            else if(s=="HOLA")
            {
                cout<<"Case "<<i<<": ";
                cout<<"SPANISH"<<endl;
            }
            else if(s=="HALLO")
            {
                cout<<"Case "<<i<<": ";
                cout<<"GERMAN"<<endl;
            }
            else if(s=="BONJOUR")

           {
               cout<<"Case "<<i<<": ";
               cout<<"FRENCH"<<endl;

            }

            else if(s=="CIAO")
            {
                cout<<"Case "<<i<<": ";
                cout<<"ITALIAN"<<endl;
            }
            else if(s=="ZDRAVSTVUJTE")
            {
                cout<<"Case "<<i<<": ";
                cout<<"RUSSIAN"<<endl;
            }
            else if(s=="#")
            {
                break;
            }
            else
            {
                cout<<"Case "<<i<<": ";
                cout<<"UNKNOWN"<<endl;
            }
            i++;

            }
    return 0;
}
