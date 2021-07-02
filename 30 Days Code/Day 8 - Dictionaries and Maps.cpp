#include<bits/stdc++.h>
#define int long long 

using namespace std;

signed main()
{
    int n;
    cin>>n;
    map <string ,string > mp;
    for (int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        mp[a]=b;
    }
    string h ;
    while (cin>>h)
    {
        auto it = mp.find(h);
        if(it == mp.end())
        {
            cout<<"Not found\n";
        }
        else 
        {
            cout<<it->first<<"="<<it->second<<endl;
        }
    }
}
