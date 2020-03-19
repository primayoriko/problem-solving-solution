#include<stdio.h>
using namespace std;

int main()
{
    int i, n, a, val,b, e;
    scanf("%d", &n);
    int arr[n];
    val=0;
    b=0;
    e=n-1;
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    a=1;
    while(b<=e)
    {
        if(arr[b]>arr[e])
        {
            val+=arr[e]*a;
            e-=1;
        }
        else
        {
            val+=arr[b]*a;
            b+=1;
        }
        a+=1;
    }
    printf("%d", val);
}
