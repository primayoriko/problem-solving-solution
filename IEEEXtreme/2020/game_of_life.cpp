#include <bits/stdc++.h> 
using namespace std; 

string s;

int generateCell(int curr, int neigh){
    int cnt = (curr == 1? 6 : 0) + neigh;
    return (s[cnt] == '1')? 1 : 0;
}

vector<vector<int>> generateBoard(vector<vector<int>> board, int m, int n){
    for(int it = 0; it < m; it++){
        vector<vector<int>> b;
        for(int i = 0; i < n; i++){
            vector<int> v(n);
            for(int j = 0; j < n; j++){
                int neigh = 0; //getNeigh(i, j, board);
                int a,b,c,d;
                a = (i + 1) % n;
                c = (j + 1) % n;
                b = ((i - 1) + n) % n;
                d = ((j - 1) + n) % n;

                // cout<<a<<b<<c<<d<<endl;
                // cout<<i<<j<<endl;
                
                if(board[a][j]) neigh++;
                if(board[b][j]) neigh++;
                if(board[i][c]) neigh++;
                if(board[i][d]) neigh++;

                int x = generateCell(board[i][j], neigh);
                v[j] = x;

            }
            b.push_back(v);
        }
        board = b;
    }

    return board;
}

int main(){
    int n, m;
    vector<vector<int>> board;

    cin>>s>>n>>m;
    // cout<<s<<n<<m<<endl;
    for(int i = 0; i < n; i++){
        vector<int> v(n);
        string t;
        cin>>t;
        for(int j = 0; j < n; j++){
            v[j] = t[j] - '0';
        }
        board.push_back(v);
    }

    board = generateBoard(board, m, n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<board[i][j];
        }
        cout<<endl;
    }

}