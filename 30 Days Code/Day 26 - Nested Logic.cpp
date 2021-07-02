#include<bits/stdc++.h>
#define int long long

using namespace std ;

int sol(int d,int m,int y,int D,int M,int Y)
{
    if(Y>=y)
    {
        if(Y>y)
        return 0;
        if (M>=m)
        {
            if(M>m)
            return 0;
            if(D>=d)
            return 0;
            else
            return 15*(d-D);
        }
        else
        {
            int h= m-M;
            if(D>d)
            h--;
            return 500*(h);
        }
    }
    
    return 10000;
    
}

signed main()
{
    int d,m,y,D,M,Y;
    cin>>d>>m>>y>>D>>M>>Y;
    
    int ans = sol(d,m,y,D,M,Y);
    
    cout<<ans;
}
