#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,n,j,k,a,b, maks=0;
    int ans=1000000007;
    cin>>n;
    vector <int> nil[n];
    int tinggi[n];
    for(i=0;i<n;i++){
        cin>>a;
        for(j=0;j<a;j++){
            cin>>b;
            nil[i].push_back(b);
            maks=max(maks, b);
        }
        if(b!=maks){
            cout<<-1<<endl;
            return 0;
        }
        else{
            tinggi[i]=b;
            maks=0;
        }
        ans=min(ans,tinggi[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<nil[i].size()-1;j++){
            if(nil[i][j]>=ans){
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<ans<<endl;
}
