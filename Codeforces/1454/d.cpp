#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9+7;

vector<long long> pr;

void SieveOfEratosthenes(int n) 
{ 

    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 

    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 

            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    // Print all prime numbers 
    for (int p=2; p<=n; p++) 
        if (prime[p]) 
            pr.push_back(p);
} 

int main(){
    SieveOfEratosthenes(1000000);
    int N = pr.size();
    int t;
    cin>>t;
    while(t--){
        long long num;
        cin>>num;
        int res = 0;
        long long m = 0;
        for(int i = 0; i < N; i++){
            if(pr[i] >= 300000 && pr[i] * pr[i] > num){
                if(res < 1){
                    res = 1;
                    m = 1;
                }
                break;
            }
            int cnt = 0;
            if(num % pr[i] == 0){
                // long long l = num/pr[i];
                // res = (res < l)? l : res;
                long long temp = num;
                do {
                    cnt++;
                    temp /= pr[i];
                    // cout<<'n'<<endl;
                } while(temp > 1 && temp % pr[i] == 0);
                if(res < cnt){
                    res = cnt;
                    m = pr[i];
                }
            }
        }
        cout<<res<<endl;
        for(int i = 0; i < res - 1; i++){
            cout<<m<<' ';
            num /= m;
        }
        cout<<num<<endl;
    }
}