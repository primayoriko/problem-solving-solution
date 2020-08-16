#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, move = 2;
    long a = 0, b = 0, last = 0, cur = 0;
    cin>>n;
    long arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    a += arr[0];
    last = arr[0];

    int l = 1, r = n - 1;
    while(l <= r){
        if(move % 2 == 1){
            a += arr[l];
            cur += arr[l]; 
            // cout<<l<<' '<<arr[l]<<' '<<'a'<<endl;
            l++;
        } else {
            b += arr[r];
            cur += arr[r];
            // cout<<r<<' '<<arr[r]<<' '<<'b'<<endl;
            r--;
        }

        if(last < cur){
            //cout<<"----"<<last<<" "<<cur<<endl;
            last = cur;
            cur = 0;
            if(l <= r) move++;
        } 
    }
    //printf("%d %d\n", l, r);
    move = min(move, n);
    printf("%li %li %li\n", move, a, b);
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}