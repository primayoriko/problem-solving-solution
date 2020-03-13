#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a;
	int arr[a],num[a],ans(0);
	for(int i=0;i<a;i++){
		cin>>arr[i];
		num[i]=0;
	}
	sort(arr,arr+a);
	int r=0;
	for(int i=0;i<a;i++){
		while (arr[r]-arr[i]<=5 && r<a){
			r++;
		}
		num[i]=r-i;
		ans= max(num[i],ans);
	}
	cout<<ans<<endl;	
}
