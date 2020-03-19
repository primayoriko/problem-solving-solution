#include <bits/stdc++.h>
using namespace std;

int ans[100][2][107];
int k[100];

int strlent(string a){
    int cnt=0;
    while(a[cnt]!='\0'){
        cnt++;
    }
    return cnt;
}

int main(){
    int n,i,j,l;
    string s;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        k[i]=strlent(s);
        for(j=k[i]-1;j>=0;j--){
            if((s[j]-'0')==0){
                while((s[j]-'0')==0){
                    if (s[j-1]=='0'){
                        ans[i][0][j]=0;
                        ans[i][1][j]=0;
                    }
                    else{
                        ans[i][0][j]=5;
                        ans[i][1][j]=5;
                        j--;
                        break;
                    }
                    j--;
                }
            }
            if((s[j]-'0')!=0){
                if((s[j]-'0')-1!=4){
                    ans[i][0][j]=1;
                    ans[i][1][j]=(s[j]-'0')-1;
                }
                else{
                    ans[i][0][j]=2;
                    ans[i][1][j]=(s[j]-'0')-2;
                }
            }
    }
    }
    for(i=0;i<n;i++){
        cout<<"Case #"<<i+1<<": ";
        for(j=0;j<k[i];j++){
            if (j==0 && ans[i][0][j]==0) {continue;}
            cout<<ans[i][0][j];
        }
        cout<<' ';
        for(j=0;j<k[i];j++){
            if (j==0 && ans[i][1][j]==0) {continue;}
            cout<<ans[i][1][j];
        }
        cout<<endl;
    }
}
