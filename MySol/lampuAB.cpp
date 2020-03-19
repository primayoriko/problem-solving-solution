#include <bits/stdc++.h>
using namespace std;

bool hs1 [26][100005];
bool hs2 [26][100005];
vector <int> ks1 [26];
vector <int> ks2 [26];
vector <int> r;

int strleng (string s){
    int count = 0;
    while (str[count] != '\0') count++;
    return count;
}

int main(){
    memset(hs1, true, sizeof(hs1));
    memset(hs2, true, sizeof(hs2));
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1, string s2;
    int i,n,j,k,a,b, maks=0;
    cin>>n>>s1>>s2;
    a=strleng(s1);
    b=strleng(s2);
    for(i=0;i<a;i++){
        hs1[s1[i]-'a'][i]=false;
        ks1[s1[i]-'a'].push_back(i);
    }
    for(i=0;i<b;i++){
        hs2[s2[i]-'a'][i]=false;
        ks2[s2[i]-'a'].push_back(i);
    }
    for(i=0;i<26;i++){
        for(j=0;j<ks1[i].size();j++){
            int cnt=0;
            for(k=0;cnt<=n;k++){
                if(hs2[i][k%n] && (k%n)!=ks1[j]) r.push_back(cnt)
            }
        }

    }
}
