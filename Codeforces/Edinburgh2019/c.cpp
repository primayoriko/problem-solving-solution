#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, d;
    cin>>a>>d;
    int p = d/a;
    int m = d%a;
    int res = a;
    if(m > 0){
        if(m < p) res += 1;
        else{
            res += m/p;
            if((m%p != 0)) res++;
        }
    }
    cout<<res<<endl;
    return 0;
}