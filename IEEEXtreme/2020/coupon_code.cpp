#include <bits/stdc++.h> 
using namespace std; 


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string arr[n];

    int length = 14;

    for(int i = 0; i < n; i++){
        // scanf("%s", &(arr[i]));
        cin>>arr[i];
    }
    
    long long similiar = 0;
    for(int i = 0; i< n;i++){
        for(int j =0; j< n; j++){
            int diff = 0;
            for(int l = 0; l < length; l++){
                if(arr[i][l] != arr[j][l]){
                    diff++;
                }

                if(diff >= 2)
                    break;
            }
            if(diff == 1){
                similiar++;
            }
        }
    }

    cout<<similiar/2<<endl;
}