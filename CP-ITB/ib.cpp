#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mins=arr[0], maks=arr[0];
    for(int i=1;i<n;i++){
        mins = min(mins, arr[i]);
        maks = max(maks, arr[i]);
    }
    //cout<<mins<<' '<<maks<<endl;
    //wavelet_tree* wt = new wavelet_tree(arr, arr+n, mins, maks);
    wavelet_tree wt(arr, arr+n, mins, maks); 
    for(int i=0;i<n;i++)
        cout<<wt.kOrLess(0, i-1, arr[i])<<' ';
    cout<<endl;
    return 0;
}