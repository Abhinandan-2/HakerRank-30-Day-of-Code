#include<bits/stdc++.h>
#define int long long 

using namespace std;

bool sol(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

signed main()
{
    int t ;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
    
       bool a = sol(n);
       if (a)
       cout<<"Prime"<<endl;
       else
       cout<<"Not prime"<<endl;

    }
    
}
