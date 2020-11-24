#include<bits/stdc++.h>

using namespace std;

int coinChange(int N, int c[], int V){
    int dp[N + 1][V + 1];

    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= V; j++){
            if(j == 0){
                dp[i][j] = 1;
            }
            int x = i>0? dp[i - 1][j] : 0;
            int y = (j - c[i] > 0)? dp[i][j - c[i]]: 0;
            dp[i][j] = 0;
        }
    }
}

int main(){

}