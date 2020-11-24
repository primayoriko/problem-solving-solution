#include <bits/stdc++.h> 
using namespace std; 


int main(){
    long long w, h, a, b, m, c;

    cin>>w>>h>>a>>b>>m>>c;

    bool verSlice = w % a != 0;
    bool horSlice = h % b != 0;

    long long totalMozaic = (w/a + ((verSlice)? 1 : 0)) * (h/b + ((horSlice)? 1:0));

    long long sliceLength = (horSlice? w : 0) + (verSlice? h : 0);

    long long totalPile = totalMozaic/10 + ((totalMozaic%10 == 0)? 0 : 1);
    cout<<totalPile * m + sliceLength * c<<endl;
}