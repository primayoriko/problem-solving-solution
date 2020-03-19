#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    int l1[q],r1[q],r2[q],l2[q];
    for(int i=0;i<q;i++){
        cin>>l1[i]>>r1[i]>>l2[i]>>r2[i];
    }
    for(int i=0;i<q;i++){
        if(r1[i]!=l2[]){
            cout<<r1[i]<<' '<<l2[i]<<endl;
        }
        else{
            cout<<l1[i]<<' '<<r2[i]<<endl;
        }
    }
}
