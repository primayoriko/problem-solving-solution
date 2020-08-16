// PROBLEM STATEMENT

// Ryo is a pro mathematician. He challenges you all to solve his own puzzle. The rules of the puzzle is given integers n and m and you must find how many steps (minimum) are taken to get m from n with only two rules:

//     Multiply n by 2

//     Subtract n with 1

// Ryo predicts that you all can’t answer this puzzle! This is your chance to show Ryo that you can beat Ryo with this puzzle!

// Input Format

// Integer n and m

// Constraints

// (1 <= n,m <= 105)

// Output Format

// An integer that shows how many steps (minimum) are taken to convert n to m.

// Sample Input 0

// 2 10

// Sample Output 0

// 5

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 1e9 + 7;
const int N = 1e5 + 7;

int dp[N];
bool vis[N];
int n;

int traversal(int m){
    //cout<<m<<endl;
    if (m <= 0 || vis[m]) return MAX;
    
    vis[m] = true;
    if(m >= n){
        dp[m] = m - n;
    }    
    else 
        dp[m] = min(dp[m], 1 + min(traversal(m * 2), traversal(m - 1)));
    return dp[m];
}

int main() {
    for(int i = 0; i < N; i++){
        dp[i] = MAX;
        vis[i] = false;
    }
    int m;
    cin>>m>>n;
    traversal(m);
    cout<<dp[m]<<endl;
    return 0;
}
