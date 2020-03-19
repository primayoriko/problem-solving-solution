#include <bits/stdc++.h>
using namespace std;

#define N (int) 1e3+5
#define f(a,b) for(a=0;a<b;a++)

vector <int> euler[N], segtree[N], first[N], height[N], child[N][N];
vector <bool> visited[N];

void dfs(int i, int x, int h){
    visited[i][x]=true;
    height[i][x]= h;
    first[i][x]=euler[i].size();
    euler[i].push_back(x);
    for(int q = 0; q < child[i][x].size(); q++){
        if(!visited[i][child[i][x][q]]){
            dfs(i, child[i][x][q], h+1);
            euler[i].push_back(x);
        }
    }
}

void build(int i, int node, int b, int e){
    if (b==e)segtree[i][node]=euler[i][b];
    else{
        int mid = (b+e) >> 1;
        build(i,(node<<1), b, mid);
        build(i, (node<<1) | 1, mid+1, e);
        int l = segtree[i][(node<<1)], r = segtree[i][(node<<1)| 1];
        segtree[i][node] = (height[i][l] < height[i][r])? l : r;
    }
}

int query(int i, int node, int b, int e, int L, int R){
    if (b > R || e < L) return -1;
    else if (b>=L && e<=R) return segtree[i][node];
    else{
        int mid = (b+e) >> 1;
        int l = query(i, node << 1, b, mid, L, R);
        int r = query (i, (node << 1) | 1, mid + 1, e, L, R);
        if (l==-1) return r;
        else if(r==-1) return l;
        else return (height[i][l] < height[i][r])? l : r;
    }
}

int lca(int i, int u, int v){
    int l = first[i][u], r = first[i][v];
    if (l>r) swap (l,r);
    return query(i, 1, 0, euler[i].size()-1, l, r);
}

void LCA(int i, int n) {
        height[i].resize(n);
        first[i].resize(n);
        euler[i].reserve(n * 2);
        visited[i].assign(n, false);
        dfs(i, 0, 0);
        int m = euler[i].size();
        segtree[i].resize(m * 4);
        build(i, 1, 0, m - 1);
    }

int main(){
    //freopen ("LCA.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //ofstream myfile;
    //myfile.open ("LCA_ans.txt");
    int j,k,t,a,b,m,i,n;
    cin>>t;
    f(i,t){
        cin>>n;
        f(j,n){
            cin>>m;
            f(k,m){
                cin>>a;
                child[i+1][j].push_back(a-1);
            }
        }
        LCA(i+1, n);
        //f(j,euler[i+1].size()) myfile<<euler[i+1][j]<<endl;
        //f(j,n) myfile<<child[i+1][j].size()<<endl;

        //f(j,n) myfile<<visited[i+1][j]<<endl;

        //myfile<<height[i+1].size()<<endl;
        //myfile<<first[i+1].size()<<endl;
        //myfile<<euler[i+1].size()<<endl;
        //myfile<<visited[i+1].size()<<endl;
        cout<<"Case "<<i+1<<":"<<endl;
        cin>>k;
        f(j,k){
            cin>>a>>b;
            cout<<lca(i+1, a-1, b-1)+1<<endl;
        }
    }
}
