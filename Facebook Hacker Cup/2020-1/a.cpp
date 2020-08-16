#include <bits/stdc++.h>
using namespace std;

char in[100][51], out[100][51], res[100][51][51];
int N[100];

void solve(int t){
    cin>>N[t];
    for(int i = 0; i < N[t]; i++){
        for(int j = 0; j < N[t]; j++){
            res[t][i][j] = 'Y';
        }
    }
        
    for(int i = 0; i < N[t]; i++)
        cin>>in[t][i];

    for(int i = 0; i < N[t]; i++)
        cin>>out[t][i];

    for(int i = 0; i < N[t]; i++){
        if(out[t][i] == 'N'){
            for(int k = 0; k <= i ; k++){
                for(int j = i + 1; j < N[t]; j++){
                    res[t][k][j] = 'N'; 
                }
            }
            for(int k = i; k < N[t] ; k++){
                for(int j = 0; j < i; j++){
                    res[t][k][j] = 'N'; 
                }
            }
        }
    }

    for(int i = 0; i < N[t]; i++){
        if(in[t][i] == 'N'){
            for(int k = 0; k < i ; k++){
                for(int j = i; j < N[t]; j++){
                    res[t][k][j] = 'N'; 
                }
            }
            for(int k = i + 1; k < N[t] ; k++){
                for(int j = 0; j <= i; j++){
                    res[t][k][j] = 'N'; 
                }
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i <= t; i++)
        solve(i);
    for(int k = 1; k <= t; k++){
        printf("Case #%d:\n", k);
        for(int i = 0; i < N[k]; i++){
            for(int j = 0; j < N[k]; j++){
                printf("%c", res[k][i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}