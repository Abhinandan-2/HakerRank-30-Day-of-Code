#include<bits/stdc++.h>
#define int long long 

using namespace std;

signed main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int s=0;
   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                s++;
            }
        }
    }
    cout<<"Array is sorted in "<<s<<" swaps.\n";
    cout<<"First Element: "<<a[0];
    cout<<"\nLast Element: "<<a[n-1];
}
