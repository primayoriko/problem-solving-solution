#include <bits/stdc++.h>
using namespace std;

int data[100008];
long long int sum=1;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i,j,k,q,n,m,a,b;
    cin>>n>>m;
    data[0]=0;
    for(i=1;i<=m;i++){
        cin>>data[i];
    }
    sort(data+1,data+m+1);
    for(i=1;i<=m;i++){
            cout<<data[i]<<' ';}
    for(i=1;i<=m;i++){
        a=((data[i]-data[i-1]-1)*(m-i+1))%1000000007;
        //cout<<a<<endl;
        if(a!=0) sum*=a;
    }
    sum=sum%1000000007;
    cout<<sum;

}
