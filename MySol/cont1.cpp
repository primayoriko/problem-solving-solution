#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i,n;
    string s;
    cin>>n;
    cin>>s;
    i=0;
    int j=1;
    while(i<n)
    {
        cout<<s[i];
        i+=j;
        j++;
    }
}
