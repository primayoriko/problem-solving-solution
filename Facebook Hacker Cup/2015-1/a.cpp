#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+3;
int primacity[N+1]; 
vector<int> prim[10];

void SieveOfEratosthenesModified() 
{ 
    memset(primacity, 0, sizeof(primacity)); 
    for (int i=2; i*i<=N; i++) 
    { 
        if (primacity[i] == 0) 
        { 
            for (int j=i; j<=N; j += i) 
                primacity[j]++; 
        } 
    } 
}

void preprocess(){
    SieveOfEratosthenesModified();
    for(int i = 2; i <= N; i++){
        prim[primacity[i]].push_back(i);
    }
}

void solve(int t){
    int l, r, k;
    cin>>l>>r>>k;
    int cnt;
    if(k > 10)  
        cnt = 0;
    else
        cnt = upper_bound() - lower_bound();
    printf("Case #%d: %d\n", t, cnt);
}

int main(){
    preprocess();
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        solve(i);
    }

    return 0;
}