#include <stdio.h>
using namespace std;

int main()
{
    int i,n,j;
    scanf("%d", &n);
    int ar[n], ki[n], ka[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(i=0; i<n; i++)
    {
        if (i==0)
        {
            ki[i]=0;
        }
        else if(ar[i]>ar[i-1])
        {
           ki[i]=ki[i-1]+1;
        }
        else
        {
           ki[i]=0;
        }

        if (i==0)
        {
            ka[n-1-i]=0;
        }
        else if(ar[n-1-i]>ar[n-i])
        {
            ka[n-1-i]=ka[n-i]+1;
        }
        else
        {
           ka[n-i-1]=0;
        }

    }
    for(i=0; i<n; i++)
    {
        j=ka[i]+ki[i];
        printf("%d ", j);
    }
}
