#include <bits/stdc++.h> 
using namespace std; 

long long count(long long c, long long n, long long p, long long w){
    if(c > w){
        return 0LL;
    }

    else if(c > p){
        return min(n, w / c);
    }

    else{ // c < p 
        int first = min(w / c, n); // yg diratain awal
        int diff = n - first;
        int rem = w - first * c; //sisa kayu
        int next = (rem/(p-c));
        int full = max(0, next - diff);

        return first - full;
    }

}

int main(){
    long long c, n, p, w;
    cin>>c>>n>>p>>w;

    cout<<count(c, n, p, w)<<endl;
}