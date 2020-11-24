#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t;
    while(t--){
        int n;
        cin>>n;
        if(n < 4){
            cout<<"impossible"<<endl;
        } else {
            if(n == 4){
                cout<<"aabb\ncaab\ncccb\ndddd\n";
            }
        }
    }
}
