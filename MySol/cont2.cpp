#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i,n;
    string s;
    cin>>n;
    int a[n], max1,min1,max2,min2;
    min1=99999999;
    max1=0;
    min2=99999999;
    max2=0;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<min1)
        {
            min1=a[i];
        }
        if(a[i]>max1)
        {
            max1=a[i];
        }
    }

    for(i=0;i<n;i++)
    {
        if(a[i]<min2 && a[i]!=min1)
        {
            min2=a[i];
        }
        if(a[i]>max2 && a[i]!=max1)
        {
            max2=a[i];
        }
    }
    if(max2==0)
    {
        max2=max1;
    }
    if(min2==99999999)
    {
        min2=min1;
    }

    int s1, s2;
    s1=min2-min1;
    s2=max1-max2;
    if(s1>s2)
    {
        cout<<(max1-min2)<<endl;
    }
    else
    {
        cout<<(max2-min1)<<endl;
    }
}
