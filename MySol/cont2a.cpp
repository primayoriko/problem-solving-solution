#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i,n;
    cin>>n;
    int l[n], r[n];
    for(i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];
    }
    for(i=0;i<n;i++)
    {
            cout<<l[i]<<' '<<l[i]*2<<endl;
    }

}

