#include <bits/stdc++.h>
using namespace std;

bool isPalin(string s){
    int t = s.size();

    for(int i=0; i * 2 - 1 < t; i++){
        if(s[i]!=s[t-i-1])
            return false;
    }

    return true;
}

int main(){
    int t, cnt = 0;
    string s;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>s;
        if(isPalin(s))
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}