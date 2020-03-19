#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,j,i,num[6];
    cin>>n;
    char a[n],r[6][n];
    memset(num,0,sizeof(num));
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<6;i++){
        if(i==0){
            for(j=0;j<n;j++){
                if(j%3==0){
                    r[i][j]='R';
                }
                else if (j%3==1){
                    r[i][j]='G';
                }
                else{
                    r[i][j]='B';
                }
            }
        }
        if(i==1){
            for(j=0;j<n;j++){
                if(j%3==0){
                    r[i][j]='R';
                }
                else if (j%3==1){
                    r[i][j]='B';
                }
                else{
                    r[i][j]='G';
                }
            }
        }
        if(i==2){
            for(j=0;j<n;j++){
                if(j%3==0){
                    r[i][j]='G';
                }
                else if (j%3==1){
                    r[i][j]='R';
                }
                else{
                    r[i][j]='B';
                }
            }
        }
        if(i==3){
            for(j=0;j<n;j++){
                if(j%3==0){
                    r[i][j]='G';
                }
                else if (j%3==1){
                    r[i][j]='B';
                }
                else{
                    r[i][j]='R';
                }
            }
        }
        if(i==4){
            for(j=0;j<n;j++){
                if(j%3==0){
                    r[i][j]='B';
                }
                else if (j%3==1){
                    r[i][j]='G';
                }
                else{
                    r[i][j]='R';
                }
            }
        }
        if(i==5){
            for(j=0;j<n;j++){
                if(j%3==0){
                    r[i][j]='B';
                }
                else if (j%3==1){
                    r[i][j]='R';
                }
                else{
                    r[i][j]='G';
                }
            }
        }
    }
    for(i=0;i<6;i++){
        for(j=0;j<n;j++){
            if(a[j]!=r[i][j]){
                num[i]++;
            }
        }
    }
    int nil=99999999,inx;
    for(i=0;i<6;i++){
        if(num[i]<nil){
            nil=num[i];
            inx=i;
        }
    }
    cout<<nil<<endl;
    for(j=0;j<n;j++){
        cout<<r[inx][j];
    }
}
