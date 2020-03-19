#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,s,k;
    bool a=false;
    cin>>n>>s;
    k=s;
    int mx[n],mn[n];
    if((k==0 and n!=1) or s>n*9)
    {
        a=true;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(k>=9)
            {
                mx[i]=9;
            }
            else
            {
                mx[i]=k;
            }
            k-=mx[i];
        }
        for(i=0;i<n;i++)
        {
            if(n==1 && s==0)
            {
                mn[i]=0;
            }
            else if(i==0 && s-1<=(n-1)*9)
            {
                mn[i]=1;
            }
            else if(i==0 && s-1>(n-1)*9)
            {
                mn[i]=s-(n-i-1)*9;
            }
            else if(s<=(n-i-1)*9)
            {
                mn[i]=0;
            }
            else
            {
                mn[i]=s-(n-i-1)*9;
            }
            s-=mn[i];
        }
    }

    if(a){cout<<"-1 -1";}
    else
    {
        for(i=0;i<n;i++)
        {
            cout<<mn[i];
        }
        cout<<' ';
        for(i=0;i<n;i++)
        {
            cout<<mx[i];
        }
    }
}
