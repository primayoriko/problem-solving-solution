#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, i;
        cin>>n;
        pair<int, int> arr[n];
        for(i = 0; i < n; i++){
            cin>>arr[i].first;
            arr[i].second = i + 1;
        }
        sort(arr, arr + n);
        // for(i = 0; i<n;i++){
        //     cout<<arr[i].first<<' '<<arr[i].second<<endl;
        // }
        if(n == 1 || arr[0].first != arr[1].first){
            cout<<arr[0].second<<endl;
            continue;
        }
        
        bool flg = false;
        for(i = 1; i < n - 1 && !flg; i++){
            flg = arr[i].first != arr[i + 1].first && 
                    arr[i].first != arr[i - 1].first;
            if(flg) i--;
        }
        if(flg){
            cout<<arr[i].second<<endl;
        } else if (arr[n-1].first !=arr[n-2].first){
            cout<<arr[n - 1].second<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
}