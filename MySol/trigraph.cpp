#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int arr[300005];
int path[3][300005];

int dp(int i, int j, int n)
{
    if(j==n-1)
    {
         path [i][j]=arr[3*j+1];
    }
    else if (path [i][j]==9999999)
    {
        if(i==1)
        {
            path [i][j]=min(dp(1, (j+1), n), dp(2, (j+1), n))+arr[3*j];
        }
        else if(i==2)
        {
            path [i][j]=min(min(dp(1, (j+1), n), dp(2, (j+1), n)), dp(3, (j+1), n))+arr[3*j+1];
        }
        else if(i==3)
        {
            path [i][j]=min(dp(3, (j+1), n), dp(2, (j+1), n))+arr[3*j+2];
        }
    }
    return path [i][j];
}

int main()
{
    int i, j, n;
    scanf("%d", &n);

    for (i=0; i<3*n; i+=3)
    {
        scanf("%d %d %d", &arr[i], &arr[i+1], &arr[i+2]);
        //printf("%d %d %d", i, i+1, i+2);
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<300005; j++)
        {
            path[i][j]=9999999;
        }
    }
    int val=dp(2, 0, n);
    printf("%d", val);
}
