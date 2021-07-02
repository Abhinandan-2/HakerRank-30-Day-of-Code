#include<bits/stdc++.h>
#define int long long

using namespace std;

bool comp(string a , string b)
{
    int i=0,j=0;
    int n = a.size();
    int m = b.size();
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
        return 1;
        if(a[i]>b[j])
        return 0;
        i++;
        j++;
    }
    if(i==n&&j==m)
    return 1;
    if(i!=n)
    return 0;
    return 1;
}

signed main()
{
    int n;
    cin>>n;
    vector<string> a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    for(int i=0;i<b.size();i++)
    {
        int h= b[i].size();
        if(h<10||b[i].substr(h-10,10)!="@gmail.com")
        {
            b.erase(b.begin()+i);
            a.erase(a.begin()+i);
            i--;
        }
    }
    
    sort(a.begin(),a.end(),comp);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
}
