#include<bits/stdc++.h>
#define int long long 

using namespace std;

signed main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a;
        int m = -1;
        for(int i=1;i<=n;i++)
        a.push_back(i);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((a[i]&a[j])>m&&(a[i]&a[j])<k)
                m=(a[i]&a[j]);
            }
        }
        cout<<m<<endl;
    }
}
