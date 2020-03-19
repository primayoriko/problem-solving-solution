#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,m,k,temp=0;
    cin>>n>>k>>m;
    int her[n],j=n;
    long double s=0;
    for(i=0;i<n;i++){
        cin>>her[i];
        s+=her[i];
    }
    sort(her,her+n);
    int flag=1,r=n-1,l=0,op=0;
    while(flag){
        if(op>=m or l>r){break;}
        if((s-her[l])/(j-1)>(s+1)/j and j>=2 and (m-op)<=(j)){
                s-=her[l];
                l++;
                op++;
                j--;
                //+ ((j%k==0)? 0 : 1))
        }
        else{
            if(temp==k){
               temp=0;
               r--;
               if(r<0 or l>r){break;}
            }
            her[r]++;
            s++;
            temp++;
            op++;
        }
        //cout<<m-op<<' '<<j-1<<' '<<s/j<<endl;
    }
    cout<<s/j<<endl;
}
