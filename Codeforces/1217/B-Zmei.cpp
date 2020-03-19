#include <bits/stdc++.h>
using namespace std;

void solver(){
    int n, x;
    int step=0;
    int ult1=-99999, ult2=-99999;
    cin>>n>>x;

    int arr[2][n];
    int dmg[n] = {0};
    int j=0;
    for(int i=0;i<n;i++){
        cin>>arr[0][i]>>arr[1][i];
        if(arr[0][i]-arr[1][i]<0){
            if(arr[0][i]>ult2) ult2 = arr[0][i];
        }
        else if (ult1< arr[0][i]){
            if (ult1>0){
                dmg[j]=ult1;
                j++;
            }
            ult1 = arr[0][i];
        }
        else {
            dmg[j]=arr[0][i]-arr[1][i];
            j++;
        }
    }
    sort(dmg,dmg+j);
    while(j-- && x>=0){
        if(x<= ult2){
            step++;
            x-=ult2;
        }
        else if(x<= ult1 || j<=1){
            j++;
            step++;
            x-=ult1;
        }
        else{
            step++;
            x-=dmg[j];
        }
        cout<<x<<endl;
    }
    if(!x){
        step=-1;
    }
    cout<<step<<endl;
}

int main(){
    int N;
    cin>>N;
    while(N--){
        solver();
    }
}
