#include <bits/stdc++.h>
using namespace std;
#define INF 1e9+7

int tes(int a,int b){
    int s=INF;
    for(int i=100;i>0;i--){
        if(a%i==0){
            s=min(s, (a/i + b*i)-a-b);
        }
    }
    return s;
}

int main(){
    int n,i,j,s=0,ans=INF;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        s+=arr[i];
    }
    sort(arr,arr+n);
    for(i=1;i<n;i++){
        ans=min(ans, tes(arr[i],arr[0]));
    }
    if(ans==INF){
        cout<<s<<endl;
    }
    else{cout<<s+ans<<endl;}
}
