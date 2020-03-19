#include <bits/stdc++.h>
using namespace std;

int s[1001],num[1001];

int main()
{
    int n,i,j,x,y,ans=99999999;
    memset(s,0, sizeof(s));
    memset(num,0, sizeof(num));
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>x;
        s[x]++;
    }
    for(i=1;i<1001;i++)
    {
        for(j=1;j<1001;j++)
        {
            if(abs(i-j)>1)
            {
                num[i]+=s[j]*(abs(i-j)-1);
            }
        }
    }
    for(i=1;i<1001;i++)
    {
        if(ans> num[i])
        {
            ans=num[i];
            y=i;
        }
    }
    cout<<y<<' '<<ans<<endl;
    return 0;
}
