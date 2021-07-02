#include<bits/stdc++.h>
#define int long long 

using namespace std;

signed main()
{
    int n;
    cin>>n;
    string a;
    while(n>0)
    {
        if(n%2==0)
        {
            a.push_back('0');
        }
        else
        {
             a.push_back('1');
        }
        n/=2;
    }
    reverse(a.begin(),a.end());
    
    int t=0,f=0;
    for(int i=0;i<a.size();i++)
    {
        if(i==a.size()-1)
        {
            if(a[i]=='1')
            {
                f++;
            }
             if(f>t)
                 {
                     t=f;
                 }
                f=0;
        }
        else
        {
            if(a[i]=='1')
            {
                f++;
            }
            else
            {
                 if(f>t)
                 {
                    t=f;
                 }
                 f=0;
            }
        }
        
    }
    cout<<t;
}
