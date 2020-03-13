#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,res(0);
	cin>>a>>b;
	int arr[b];
	memset(arr,0,sizeof(arr));
	for(int i=0;i<a;i++){
		cin>>c;
		arr[c%b]++;
	}
	res += arr[0]/2;
	for(int i=1;i<b;i++){
		if(i==b-i) res += arr[i]/2;
		else res += min(arr[i], arr[b-i]);
		arr[i]=0;
		arr[b-i]=0;
	}
	cout<<res*2<<endl;
}
