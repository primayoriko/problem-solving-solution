#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int n, cnt = 1; 
        cin>>n;
        while(n != 0){
            int num = n % 10;
            num *= cnt;
            if(num != 0)
                v.push_back(num);
            cnt *= 10;
            n /= 10;
        }
        cout<<v.size()<<endl;
        for(int i = 0; i < v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}