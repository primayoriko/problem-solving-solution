#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n + 1];
        for(int i = 1; i <= n; i++){
            int a = (i %n) + 1;
            arr[a] = i;
        }
        for(int i = 1; i<=n; i++){
            cout<<arr[i]<<' ';
        }

        cout<<endl;
    }
}