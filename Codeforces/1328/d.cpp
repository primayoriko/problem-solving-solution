#include <bits/stdc++.h>
using namespace std;

int solve(){
    set<pair<int, int>> adj;
    map<int,int> numColor;
    int n;
    cin>>n;
    int arr[n], color[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
        numColor[arr[i]]=0;
    }
    for(int i=0;i<n;i++){
        pair<int, int> temp;
        tem
    }


    cout<<numColor.size()<<endl;
    int i=1;
    for(auto a = numColor.begin(); a!=numColor.end();a++){
        
        a->second = i;
        i++;
        //cout<<a->first<<' '<<a->second<<endl;
    }
    for(int j=0;j<n;j++){
        cout<<numColor[arr[j]]<<' ';
    }
    cout<<'\n';
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}