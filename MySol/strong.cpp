#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int i, n;
    scanf("%d", &n);
    int arr[n+1], ten[n];
    arr[0]=0;
    int s=0;
    int hit=-1;
    for(i=1; i<n+1; i++)
    {
        scanf("%d", &arr[i]);
        ten[i-1]=arr[i]-arr[i-1];
        if(ten[i-1]>s)
        {
            s=ten[i-1];
        }
    }

    for(i=n-1; i>=0; i--)
    {
        if (ten[i]==s)
        {
            hit+=1;
        }
    }
    if (hit>0)
    {
        s+=1;
    }

    printf("%d", s);
}
