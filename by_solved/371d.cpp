#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n;
    int cap[n], fil[n];
    set<int> nfull;
    for(int i=0;i<n;i++){
        cin>>cap[i];
        fil[i] = 0;
        nfull.insert(i);
    }
    cin>>q;
    for(int i=0;i<q){
        int a, b,c;
        cin>>a;
        if(a==1){
            cin>>b>>c;
            while(c>0){
                fil[b] = max(c+fil[b], cap[b]);
                c -=cap[b] - fil[b];
                if(cap[b]==fil[b]){
                    nfull.erase(b);
                }
                auto x = nfull.upper_bound(b);
                b = *x;
            }
        }
        else{
            cin>>b;
            cout<<fil[b]<<endl;
        }
    }
    return 0;
}