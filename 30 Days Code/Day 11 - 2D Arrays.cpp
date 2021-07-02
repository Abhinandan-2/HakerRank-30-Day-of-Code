#include <bits/stdc++.h>
#define int long long 

using namespace std;


signed main()
{
    vector<vector<int>> a(6);
    for (int i = 0; i < 6; i++) {
        a[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> a[i][j];
        }
    }
    int f=INT_MIN;
    for (int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            int h = a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(h>f)
            {
                f=h;
            }
        }
    }
    cout<<f;

    return 0;
}
