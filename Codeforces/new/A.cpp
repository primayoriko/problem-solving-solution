#include <bits/stdc++.h>
using namespace std;

int binarySearch(int l, int r, int x, int) 
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (mid - x == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(l, mid - 1, x);

        return binarySearch( mid + 1, r, x);
    }

    return -1;
}

int solver(){
  int a,b,n,s;
  cin>>a>>b>>n>>s;
  if(a)
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++) solver();
}
