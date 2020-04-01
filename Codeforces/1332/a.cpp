#include <bits/stdc++.h>
using namespace std;

int solve(){
    int a, b,c ,d;
    cin>>a>>b>>c>>d;
    int x0, y0, x1,y1, x,y;
    cin>>x>>y>>x0>>y0>>x1>>y1;
    int p = b-a+x;
    int q = d-c+y;
    if(p>=x0 && p<=x1 && q>=y0 && q<=y1){
        if((x==x0 && x==x1 && a && b) || (y==y0 && y==y1 && c&&d)){
            cout<<"No"<<endl;
        }
        else
            cout<<"Yes"<<endl;
    } 
    else
    {
        cout<<"No"<<endl;
    }   
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}   