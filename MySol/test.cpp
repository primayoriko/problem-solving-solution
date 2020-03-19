#include <bits/stdc++.h>
using namespace std;

int ak(1);

bool ptest(int n){
    int i(2);
    while(i*i<=n){
        if(n%i==0) return false;
        i++;
    }
    return true;
}

int lprm(int a){
    int ans(1);
    while(ans*ak<=a){
        ans*=ak;
        ak++;
        while (!ptest(ak)){
            ak++;
        }
    }
    return ans;
}

int main(){
    int ans(0),x,i;
    cin>>x;
    x=lprm(x);
    for(i=2;i<=x;i++) if (x%i==0) ans++;
    cout<<ans<<' '<<x<<' '<<ak;
}
