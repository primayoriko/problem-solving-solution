#include <bits/stdc++.h> 
using namespace std; 

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long m, n, k;
        cin>>m>>n>>k;
        long long arr[m];
        for(long long i = 0; i < m; i++){
            cin>>arr[i];
        }

        sort(arr, arr+m);
        for(long long i = 0; i < k; i++){
            arr[i] = n - arr[i];
        }

        long long sums = 0;

        for(long long i = 0; i<m; i++){
            sums +=arr[i];

        }

        cout<<sums<<endl;
    }
}