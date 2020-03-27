#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long a, b, i,n;
        cin>>a>>b;
        string s = "";
        for(i=0;i<a;i++)
            s+="a";

        n = 2*b;
        for(i=1;;i++){
            if(i*(i+1)>=n)
                break;
        }
        //cout<<i<<endl;
        long long lim = i*(i+1);
        long long diff = (lim-n)/2;
        //cout<<a-1-i<<" "<<a-i+diff<<endl;
        s[a-1-i] = 'b';
        s[a-i+diff] = 'b';
        cout<<s<<'\n';
    }
    return 0;
}