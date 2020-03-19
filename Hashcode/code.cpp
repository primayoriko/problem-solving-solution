#include <bits/stdc++.h>
using namespace std;
int i,n,j,k,a,b,x=0,y=0,slide=0;
string s;

int point(vector < string > q, vector < string > r){
    int point=0;
    for(i=0;i<q.size();i++){

    }
    return point;
}

int main (){
    freopen ("a_example.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin>>n;
    vector < string > v[n];
    vector < string > h[n];
    for(i=0;i<n;i++){
        cin>>s;
        cin>>a;
        if (s=="V"){
            for (j=0;j<a;j++){
                cin>>s;
                v[x].push_back(s);
            }
            x++;
        }
        else{
            for (j=0;j<a;j++){
                cin>>s;
                h[y].push_back(s);
            }
            y++;
        }
        //cout<<x<<' '<<y<<endl;
    }
    //cout<<n<<endl;
    slide = y + (x / 2);
    //cout<<slide<<' '<<n;


    ofstream myfile;
    myfile.open ("a_ans.txt");

    myfile <<slide<<endl;


    myfile.close();
}
