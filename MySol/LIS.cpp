#include<bits/stdc++.h>
using namespace std;

int lis(int *arr, string k, int i, int j)
{
    if(i>j)
    {
        return 0;
    }
    if(i==1 || j==1)
    {
        return 1;
    }
    else if (*arr[j][i]!=0)
    {}
    else if(k[i-1]<k[j-1])
    {
        *arr[j][i]=1+*arr[j][i-1];
    }
    else
    {
        *arr[j][i]=max(lis(*arr, k, i,j-1),lis(*arr, k, i+1,j));
    }
    return *arr[j][i];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, i, j;
    string k;
    cin>>n;
    cin>>k;
    int *arr[n+1][n+1];
    memset(*arr, 0, sizeof(*arr));

    cout<<lis(*arr, k, 1,n)<<endl;
}
