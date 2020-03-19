#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int nil[2005];
int har[2005][2005];

int dp(int a, int i, int j)
{
    if(i>j)
    {
        return 0;
    }
    else if(har[i][j]!=-1)
    {
        return har[i][j];
    }
    else
    {
        return har[i][j]=max(dp(a+1, i+1, j)+a*nil[i], dp(a+1, i, j-1)+a*nil[j]);
    }
}

int main()
{
    int i, n, a, j;
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        scanf("%d", &nil[i]);
    }
    for (i=n; i<2005; i++)
    {
        nil[i]=0;
    }

    for(i=0; i<2005; i++)
    {
        for(j=0; j<2005; j++)
        {
            har[i][j]=-1;
        }
    }
    dp(1, 0, n-1);
    printf("%d", har[0][n-1]);
}
