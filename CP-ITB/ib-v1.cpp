#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n], pref[n];
    memset(pref, 0, sizeof(pref));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j])
                cnt++;
        }
        pref[i] = cnt;
    }
    for(int i=0;i<n;i++)
        cout<<pref[i]<<' ';
    cout<<endl;
    return 0;
}