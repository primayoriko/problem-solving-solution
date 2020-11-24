#include <bits/stdc++.h> 
using namespace std; 

const int MAX = 1e4;

int first(int arr[], int low, int high, int x, int n) 
{ 
    if (high <= low) { 
        int mid = low + (high - low) / 2; 
        if ((mid == 0 || x < arr[mid - 1]) && arr[mid] == x) 
            return mid; 
        else if (x < arr[mid]) 
            return first(arr, (mid - 1), high, x, n); 
        else
            return first(arr, low, (mid + 1), x, n); 
    } 
    return -1; 
} 

int main(){
    int n;
    cin>>n;
    int arr[n], cnt[MAX];
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }

    cnt[0] = n;
    set<int> stone;
    for(int i = 0; i < n; i++){
        stone.insert(arr[i]);
    }

    cnt[1] = stone.size();
    int lastVal = cnt[1];
    int num, same = 0; 

    for(num = 2; num < MAX; num++){
        set<int> newStone;
        set<int>::iterator itr;
        for(itr = stone.begin(); itr != stone.end(); itr++){
            newStone.insert(arr[*itr]);
            // cout<<*itr<<endl;
        }
        stone = newStone;
        cnt[num] = stone.size();
        if(lastVal == cnt[num]){
            same++;
            if(same == 5){
                break;
            }
        }
        lastVal = cnt[num];
    }

    // for(int i = 0; i <= num ; i++){
    //     cout<<'-'<<cnt[i]<<endl;
    // }

    int q;
    cin>>q;
    for(int i = 0; i < q ; i++){
        int a;
        cin>>a;
        cout<<first(cnt, cnt[0], cnt[num], a, num)<<endl;
    }

}