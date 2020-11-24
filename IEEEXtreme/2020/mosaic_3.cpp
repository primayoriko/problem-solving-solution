#include <bits/stdc++.h> 
using namespace std; 


int main(){
    long long n, m, r, c;
    cin>>n>>m>>r>>c;
    long long arr[r][c], new_arr[r][c];
    for(int i = 0; i < r; i++ ){
        for(int j = 0; j < c; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < r; i++ ){
        for(int j = 0; j < c; j++){
            new_arr[i][j] = arr[r - i - 1][c - j - 1];
        }
    }

    long long sum = 0;
    long long sum2 = 0;

    for(int i = 0; i < r; i++ ){
        for(int j = 0; j < c; j++){
            long long row = n/r + ((n % r > i)? 1 : 0);
            long long col = m/c + ((m % c > j)? 1 : 0);
            // cout<<arr[i][j]<<"---"<<row<<"---"<<col<<endl;
            sum += row * col * new_arr[i][j] * 1LL;
            sum2 += row * col * arr[i][j] * 1LL;

        }
    }

    cout<<min(sum, sum2)<<endl;
}