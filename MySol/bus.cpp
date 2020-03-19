#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,m,w,s,aw,ak;
    cin>>n>>w;
    int a[n];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m=0,aw=0,k=0, ak=0;
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j<n;j++)
        {
            s+=a[j];
            m=max(m,s);
            k=min(k,s);
            if(i==0)
            {
                aw=min(aw, s);
                ak=max(ak,s);
            }
        }
    }
    if(abs(k)>w and w-m>0)
    {
        cout<<0<<endl;
    }
    else{
        cout<<max((w-ak)+1-max(-aw,0),0)<<endl;
    }
}
