#include <stdio.h>
#include <string>
#include <algorithm>
#include <math>
using namespace std;

string arr[];

void swaps(string a, string b)
{
    int o= len(a);
    int p=len(b);
    int mn=min(o,p);
    int i=0;
    while(i<mn)
    {
        if()
    }
}

void merges(string arr[], int a, int m, int o, int b)
{
    int s=b-a+1;
    string temp[s];
    int ai=a, bi=b;


}

void msort(string arr[], int a, int b)
{
    if (a==b)
    {
        return;
    }
    else
    {
        int m= (a+b) div 2;
        msort(arr[], a, m);
        msort(arr[], m+1, b);
        merges(arr[],a,m,m+1,b);
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);

    for(i=0;i<n; i++)
    {
        scanf("%s", &arr[i]);
    }
}
