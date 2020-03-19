#include<bits/stdc++.h>
using namespace std;

long int t[1000005];
long long int b[1000006];

long long int gsum(int i)
{
    long long int s=0;
    i+=1;
    while(i>0)
    {
        s+=b[i];
        i -= i & (-i);
    }
    return s;
}

void up(int n, int i, int v)
{
    i+=1;
    while(i<=n)
    {
        b[i]+=v;
        i += i & (-i);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i, n;
    cin>>n;
    int a=1000005-n;
    for(i=0;i<=1000004;i++)
    {
        if(i<a)
        {
            t[i]=0;
        }
        else{cin>>t[i];}
    }
    memset(b,0,sizeof(b));
    for(i=0;i<1000005;i++)
    {
        up(1000005, i, t[i]);
    }
    int c,d,e,f;
    cin>>f;
    long long int o[f];
    memset(o,-1,sizeof(o));
    for(i=0;i<f;i++)
    {
        cin>>c;
        if (c==1)
        {
            cin>>d>>e;
            o[i]=gsum(a+e-1)-gsum(a+d-2);
        }
        else
        {
            cin>>d;
            a-=1;
            up(1000005, a, d);
        }
    }
    for(i=0;i<f;i++)
    {
        if(o[i]!=-1)
        {
            cout<<o[i]<<endl;
        }
    }
    return 0;
}
