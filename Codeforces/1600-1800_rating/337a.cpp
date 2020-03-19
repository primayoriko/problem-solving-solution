#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> arr;
vector<vector<bool>> vis;

int n, m, k;

bool traverseAndReduce(int i, int j, int pi, int pj){
    if(i > 0 &&  i < n+1 && j>0 && j< m+1 && arr[i][j]=='.' && !vis[i][j]){
        vis[i][j] = true;
        int cnt(0);
        if((i+1 != pi || j != pj) && traverseAndReduce(i+1, j, i, j))cnt++;
        if((i != pi || j+1 != pj) && traverseAndReduce(i, j+1, i, j))cnt++;
        if((i-1 != pi || j != pj) && traverseAndReduce(i-1, j,  i, j))cnt++;
        if((i != pi || j-1 != pj) && traverseAndReduce(i, j-1, i, j))cnt++;
        //printf("(%d, %d) = %d\n", i, j, cnt);
        if(cnt < 1 && k){
            k--;
            arr[i][j] = 'X';
            return false;
        }
        return true;
    }
    return false;
}

int main(){
    cin>>n>>m>>k;
    arr.resize(n+2);
    vis.resize(n+2);
    for(int i=0;i<n+2;i++){
        arr[i].resize(m+2);
        vis[i].resize(m+2);
    }
    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            if(i > 0 &&  i < n+1 && j>0 && j< m+1){
                //do{
                cin>>arr[i][j];
                //} while(arr[i][j]='\n');
            }
            else 
                arr[i][j] = '#';
            vis[i][j] = false;
        }
    }

    for(int i=1;i<n+1;i++){
        for (int j=1; j<m+1;j++)
        if(traverseAndReduce(i, j, -11, -11)){
            //arr[i][j] = 'X';
            break;
        }
    }
    //cout<<endl;
    for(int i=1;i<n+1;i++){
        for (int j=1; j<m+1;j++)
            cout<<arr[i][j];
        cout<<endl;
    }
    
}
