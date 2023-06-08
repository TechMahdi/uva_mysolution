#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,l,w,h;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20)
            cout<<"Case "<<i<<": "<<"good"<<endl;
        else
            cout<<"Case "<<i<<": "<<"bad"<<endl;
    }

    return 0;
}
