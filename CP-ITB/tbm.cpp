#include <bits/stdc++.h>
using namespace std;

const long long MIN_INT = -1e12 + 7;

long long kadane(long long arr[], int *start, int *end, int n){
    long long sum =0, maxSum = MIN_INT;
    bool pos = false;
    int local_start = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0)
            pos = true;
        sum +=arr[i];
        if(sum<0){
            local_start = i+1;
            sum = 0;
        }
        if (sum>maxSum){
            *start = local_start;
            *end = i;
            maxSum = sum;
        }
    }
    if(!pos){
        //cout<<"sad"<<endl;
        maxSum = arr[0], *start = 0, *end = 0;
        for(int i=1;i<n;i++){
            if(arr[i]>maxSum){
                *start = local_start;
                *end = i;
                maxSum = arr[i];
            }
        }
    }
    return maxSum;
}

long long maxSubRectangle(long long **arr, int r, int c){
    long long res = INT_MIN, sum;
    int startR, endR, startC, endC, start, end;
    for(int i = 0; i<c;i++){
        long long temp[r];
        memset(temp, 0, sizeof(temp));
        for(int j = i; j<c;j++){
            for(int p =0;p<r;p++){
                temp[p]+= *(*(arr+p)+j);
            }
            sum = kadane(temp, &start, &end, r);
            // cout<<"-------"<<sum<<endl<<i<<' '<<j<<' '<<start<<' '<<end<<endl;
            // for(int k =0;k<r;k++)
            //     cout<<temp[k]<<' ';
            // cout<<endl;
            if(sum>res){
                res = sum;
                startR = start;
                startC = i;
                endR = end;
                endC = j;
            }
        }
    }
    // cout<<startR<<' '<<endR<<endl;
    // cout<<startC<<' '<<endC<<endl;
    return res;
}

int main(){
    int r, c;
    cin>>r>>c;
    long long **arr = new long long*[r];
    for(int i=0;i<r;i++)
        arr[i] = new long long[c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    }
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++)
    //         cout<<arr[i][j]<<' ';
    //     cout<<endl;
    // }
    cout<<maxSubRectangle(arr, r, c)<<endl;
    return 0;
}