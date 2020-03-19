#include <bits/stdc++.h>
using namespace std;

vector<char> ans[102];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,n,j,k,m;
    string s;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>m>>s;
        for(j=0;j<2*m-2;j++){
            if (s[j]=='E') {ans[i].push_back('S');}
            else {ans[i].push_back('E');}
        }
    }
    for(i=0;i<n;i++){
        cout<<"Case #"<<i+1<<": ";
        for(j=0;j<2*m-2;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}
