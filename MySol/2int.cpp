#include <bits/stdc++.h>
using namespace std;

int main(){
    int q,flag=0,f=0;
    cin>>q;
    int a[q],maks=0,mak=0,mak2=0;
    for(int i=0;i<q;i++){
        cin>>a[i];
        maks=max(maks,a[i]);
    }
    for(int i=0;i<q;i++){
        if(a[i]==maks){
            if(f!=0){
                cout<<maks<<' '<<maks<<endl;
                return 0;
            }
            f++;
        }
        if(maks%a[i]!=0){
            mak=max(mak,a[i]);
            flag=1;
        }
        for(int j=0;j<q;j++){
            if(i!=j and a[i]==a[j]){
                mak2=a[i];
                break;
            }
        }
    }
    if(flag){
        cout<<maks<<' '<<mak<<endl;
    }
    else{
        cout<<maks<<' '<<mak2<<endl;
    }
}
