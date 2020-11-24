#include <bits/stdc++.h>
using namespace std;
map<char, int> prio;

bool comp(char a, char b){
    return prio[a] < prio[b];
}

int main(){
    char card[] = "23456789XJKQA"; 

    int n,k;
    bool fault = false;
    cin>>n>>k;
    map<char, int> m, canTarik;
    for(int i=0;i<13;i++){
        m[card[i]] = 4;
        prio[card[i]] = i;
        canTarik[card[i]] = true;
    }
    string s, decision;
    cin>>s;
    cin>>decision;

    string hands = "";

    for(int i=0;i<n;i++){
        m[s[i]]--;
        if(decision[i]=='y' && m[s[i]] >= 3){
            hands += s[i];
            m[s[i]]--;
        } 
        if(decision[i] == 'n'){
            if(m[s[i]] < 3){
                fault = true;
            } else {
                canTarik[s[i]] = false;
            }
        } 
    }

    if(hands.size() > k || fault){
        cout<<"impossible"<<endl;
    }else{
        sort(hands.begin(), hands.end(), comp);

        int handSize = hands.size();
        k -= handSize;
        for(int i=0;i<handSize && k > 0; i++){
            if(!canTarik[hands[i]]){
                continue;
            }

            int sisa = m[hands[i]];
            while(sisa > 0 && k > 0){
                hands += hands[i];
                sisa--;
                k--;
            }
        }
        sort(hands.begin(), hands.end(), comp);

        cout<<hands<<endl;
    }
    return 0;
}