#include <bits/stdc++.h>
using namespace std;

int main(){
    int q,n,k,a,b, mint(0), maxt(1e9+7);
    cin>>q>>k;

    int arr[q];
    set <int> mex; 
    for(int i=0 ; i<q;i++){
        cin>>arr[i];
        mex.insert(i);
        mint = min(mint, arr[i]);
        
    }
}