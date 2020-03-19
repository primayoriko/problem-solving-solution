#include <bits/stdc++.h>
using namespace std;

int hur(char x)
{
    string s="abcdefghijklmnopqrstuvwxyz";
    int a=0, i=0;
    while(a==0)
    {
        if(x==s[i])
        {
            return i;
        }
        i++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,i,j,k,temp=0,ans=0, s[26];
    memset(s,0, sizeof(s));
    cin>>n>>k;
    char q, c[n];
    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    i=0;
    while(i<n)
    {
        if(temp==0){
            q=c[i];
            temp++;
        }
        else{
            if(c[i]==q){
                temp++;
            }
            else{
                q=c[i];
                temp=1;
            }
        }
        if(temp==k){
            s[hur(q)]++;
            temp=0;
        }
        i++;
    }
    for(i=0;i<26;i++)
    {
        ans=max(ans,s[i]);
    }
    cout<<ans<<endl;
}
