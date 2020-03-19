#include <bits/stdc++.h>
using namespace std;

#define N (int) 1e5+5
#define f(a,b) for(i=a;i<b;i++)

vector < int > adj[N];
vector < bool > used[N];
int point[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,n,j,a,b,m,h;
    cin>>n>>m;

    for(i=0;i<m;i++){
        cin>>a>>b;
        adj[a+1].push_back(b+1);
        adj[b+1].push_back(a+1);
    }

    cin>>h;

}
