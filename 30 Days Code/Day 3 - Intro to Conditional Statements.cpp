#include<bits/stdc++.h>
#define int long long 
using namespace std;

signed main()
{
    int n;
    cin>>n;
    if(n%2!=0)
    cout<<"Weird";
    else
    {
        if(n>=2&&n<=5)
        cout<<"Not Weird";
        else if(n>=6&&n<=20)
        cout<<"Weird";
        else
        cout<<"Not Weird";
    }
}


