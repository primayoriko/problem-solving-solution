#include <bits/stdc++.h>
using namespace std;

long long z,x,y;

void extendedEuclid(long long A, long long B) {
    if(B == 0) {
        z = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        long long temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}
int modInverse(long long A, long long M)
{
    extendedEuclid(A,M);
    return (x%M+M)%M;    //x may be negative
}

long long  mul_inv(long long  a, long long  b)
{
	long long  b0 = b, t, q;
	long long  x0 = 0, x1 = 1;
	if (b == 1) return 1;
	while (a > 1) {
		q = a / b;
		t = b, b = a % b, a = t;
		t = x0, x0 = x1 - q * x0, x1 = t;
	}
	if (x1 < 0) x1 += b0;
	return x1;
}

long long modularExponentiation(long long x,long long n,long long M)
{
    long long result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=(result * x)%M;
        x=(x*x)%M;
        n=n/2;
    }
    return result;
}

long long factor(long long  n){
    for(long long  i=2;i*i<=n;i++){
        if(n%i==0) return i;
    }
}

void solve(){
    long long  c,e,n,d;
    cin>>c>>e>>n;
    long long  p = factor(n);
    long long  q = n/p;
    long long  ph = (p-1)*(q-1);
    d = modInverse(e, ph);
    long long  ans =modularExponentiation(c,d,n);
    cout<<ans<<endl;
}

int  main(){
    long long  T,a;
    cin>> T;
    for(long long  i=0;i<T;i++){
        solve();
        //cin>>a;
        //cout<<factor(a)<<endl;
        //cout<<mul_inv(a, 71)<<endl;
    }

        /*for(long long  j=100;j<5000;j++){
            if(j<=5000){
                if(modInverse(j,123213)<0) cout<<modInverse(j,123213)<<endl;
            }
            //cin>>a;
            //cout<<factor(a)<<endl;
            //cout<<mul_inv(a, 71)<<endl;
        }*/
}
