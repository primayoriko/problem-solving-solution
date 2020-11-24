#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9+7;
// const int N = 1e

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, i;
        cin>>n;
        vector<int> arr[n + 3];
        int res[n + 3];
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            arr[x].push_back(i);
        }

        for(int i = 1; i < n + 3; i++){
            if(arr[i].empty()){
                res[i] = INF;
            }else{
                int cnt = 0;
                for(int j = 0; j < arr[i].size() - 1; j++){
                    if(arr[i][j + 1] - arr[i][j] > 1 )
                        cnt++;
                }
                if(arr[i][0] != 0)
                    cnt++;
                if(arr[i][arr[i].size() - 1] != n-1)
                    cnt++;
                res[i] = cnt;
            }
        }

        int result = res[1];
        for(int i = 2; i < n + 3; i++){
            result = min(result, res[i]);
        }
        cout<<result<<endl;
    }
}