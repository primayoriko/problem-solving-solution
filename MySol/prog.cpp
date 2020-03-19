#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,i,j,bmin=999999999, bmax=-999999999;
    cin>>n;
    if(n==1 or n==2){cout<<0<<endl; return 0;}
    int a[n],diff[n];
    vector <int> p,q;
    for(i=0;i<n;i++){
        cin>>a[i];}
    for(i=1;i<n;i++){
        diff[i]=a[i]-a[i-1];
        bmin=min(bmin,diff[i]);
        bmax=max(bmax,diff[i]);
        }
    for(i=2;i<n;i++){
        if(diff[i]-diff[i-1]==2){p.push_back(i);}
        if(diff[i]-diff[i-1]==1){q.push_back(i);}
    }
    if(bmax-bmin> or (!p.empty() and !q.empty())){cout<<-1<<endl; return 0;}
    else{
        if(bd==1){

        }
    }

}
