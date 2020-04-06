#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    long long arr[n+1];
    long long pref[n+1], minPref[n+1], maks;
    pref[0] = 0;
    minPref[0] = 0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pref[i] = pref[i-1] + arr[i];
    }
    for(int i=1;i<=n;i++){
        minPref[i] = min(pref[i-1],min(0ll, minPref[i-1]));
    }
    maks = pref[1] - minPref[1];
    for(int i=2;i<=n;i++){
        maks = max(maks, pref[i] - minPref[i]);
    }
    cout<<maks<<endl;
    return 0;

}