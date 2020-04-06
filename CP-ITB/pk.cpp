#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m ,k;
    cin>>n>>m>>k;
    long long pref[m+1], arr[m+1];
    memset(arr, 0, sizeof(arr));
    memset(pref, 0, sizeof(pref));
    for(int i=0;i<k;i++){
        cin>>n>>n;
        //cout<<n<<endl;
        arr[n]++;
    }
    //pref[0] = 0;
    for(int i=1;i<=m;i++){
        pref[i] = pref[i-1] + arr[i];
    }
    int loc = 0;
    long long diff = pref[m];
    for(int i=1;i<=m;i++){
        if(abs(pref[m]-2*pref[i])<diff){
            loc = i;
            diff = abs(pref[m]-2*pref[i]);
        }
    }
    // for(int i=1;i<=m;i++){
    //     cout<<pref[i]<<' ';
    // }
    // cout<<endl;
    cout<<diff<<endl;
}