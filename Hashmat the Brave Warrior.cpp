#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long  h,o;
    while(cin>>h>>o)

       if(h>o)
       {
           cout<<(h-o)<<endl;
       }
       else
       {
           cout<<(o-h)<<endl;
       }



    return 0;
}
