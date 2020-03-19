#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,k,a,b,x=0;
    cin>>n>>k;
    long int s[n],j[n];
    pair <int, int> arr[n];
    memset(s,0,sizeof(s));
    for(i=0;i<n;i++){
        cin>>j[i];
        arr[i] = make_pair(j[i], i);
    }
    sort(arr, arr+n);
    for(i=1;i<n;i++)
    {
        if(arr[i].first>arr[i-1].first){
            s[arr[i].second]=s[arr[i-1].second]+1+x;
            x=0;
        }
        else{
            x++;
            s[arr[i].second]=s[arr[i-1].second];
        }
    }
    for(i=0;i<k;i++){
        cin>>a>>b;
        a--;
        b--;
        if(j[a]>j[b]){
            x=a;
        }
        else{
            x=b;
        }
        if(j[a]!=j[b]){
            s[x]-=1;
            //cout<<x<<endl;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<s[i]<<' ';
    }
}
