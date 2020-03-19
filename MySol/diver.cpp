#include <bits/stdc++.h>
using namespace std;

int ch=0;
char a[100001];

int main(){
    int n,j,i;
    cin>>n;
    a[0]='R';
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        if(a[i]==a[i+1]){
            ch++;
            if(a[i-1]=='R'){
                if(a[i+1]=='G'){
                    a[i]='B';
                }
                else{
                    a[i]='G';
                }
            }
            if(a[i-1]=='G'){
                if(a[i+1]=='R'){
                    a[i]='B';
                }
                else{
                    a[i]='R';
                }

            }
            if(a[i-1]=='B'){
                if(a[i+1]=='G'){
                    a[i]='R';
                }
                else{
                    a[i]='G';
                }
            }
        }
    }
    cout<<ch<<endl;
    for(i=1;i<=n;i++){
        cout<<a[i];
    }
}
