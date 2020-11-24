#include <bits/stdc++.h>
using namespace std;

long long factorial(long long x){
    long long ans = 1;
    for(long long i = 2; i <= x; i++){
        ans *= i;
    }
    return ans;
}

int main(){
    long long t;
    cin>>t;

    long long ans = 2 * factorial(t)/(t * t);
    cout<<ans<<endl;
    return 0;
}