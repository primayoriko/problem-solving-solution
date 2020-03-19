#include<bits/stdc++.h>
#include<cmath>
using namespace std;

const int N = pow(2,18);
long int b[18][131072];

int bag(int a, int b)
{
    return (a-a%b)/b;
}

void up(int j, long int v, int n)
{
    int e,l;
    j-=1;
    b[0][j]=v;
    int a=1;
    while(a<n+1)
    {
        if(j%2==1)
        {
            l=j-1;
            e= bag(l,2);
            if(a%2==1){b[a][e]= b[a-1][l] | b[a-1][l+1];}
            else{b[a][e]= b[a-1][l] ^ b[a-1][l+1];}
        }
        else
        {
            l=j;
            e= bag(l,2);
            if(a%2==1){b[a][e]= b[a-1][l] | b[a-1][l+1];}
            else{b[a][e]= b[a-1][l] ^ b[a-1][l+1];}
        }
        j= e;
        a+=1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i,n,m,j,v;
    cin>>n>>m;
    memset(b, 0, sizeof(b));
    for(i=0;i<pow(2,n);i++)
    {
        cin>>b[0][i];
    }
    int a=1;
    while (a<n+1)
    {
        for(i=0;i<pow(2,n-a);i++)
        {
            if(a%2==1)
            {
                b[a][i]= b[a-1][2*i] | b[a-1][(2*i)+1];

            }
            else
            {
                b[a][i]= b[a-1][2*i] ^ b[a-1][2*i+1];
            }
        }
        a+=1;
    }

    int o[m];
    memset(o, 0, sizeof(o));
    for(i=0;i<m;i++)
    {
        cin>>j>>v;
        up(j,v,n);
        o[i]=b[n][0];
    }
    for(i=0;i<m;i++)
    {
        cout<<o[i]<<endl;
    }
}
