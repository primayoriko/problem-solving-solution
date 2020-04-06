#include <bits/stdc++.h>
using namespace std;

const long MOD  = 1e9+7;

void multiply(long F[2][2], long M[2][2]){
    long x =  (((F[0][0]*M[0][0])%MOD) + ((F[0][1]*M[1][0])%MOD)+MOD)%MOD; 
    long y =  (((F[0][0]*M[0][1])%MOD) + ((F[0][1]*M[1][1])%MOD)+MOD)%MOD; 
    long z =  (((F[1][0]*M[0][0])%MOD) + ((F[1][1]*M[1][0])%MOD)+MOD)%MOD;
    long w =  (((F[1][0]*M[0][1])%MOD) + ((F[1][1]*M[1][1])%MOD)+MOD)%MOD;

    F[0][0] = x; 
    F[0][1] = y; 
    F[1][0] = z; 
    F[1][1] = w; 
}

void power(long F[2][2], long n){
    if(n<=1)
        return;
    long M[2][2] = {{1,1}, {1,0}};
    power(F, n/2);
    multiply(F, F);

    if(n%2==1)
        multiply(F,M);
}

long fib(long n){
    long F[2][2] = {{1,1},{1,0}};
    if(n==0){
        return 0;
    }
    power(F, n-1);
    return F[0][0];
}