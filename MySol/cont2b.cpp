#include <bits/stdc++.h>

using namespace std;

long long int jum(int n, vector <int> x[])
{
    int i,j;
    long long int a,k,m=0;
    for (i=0;i<26;i++)
    {
        a=0;
        k=0;
        if(x[i].empty()){}
        else if(x[i].front()!=0 and x[i].back()!=n-1){}
        else
        {
            if(x[i].front()==0)
            {
                a=1;
                j=1;
                if(j<x[i].size())
                {
                    while(x[i][j]==x[i][j-1]+1)
                    {
                        a++;
                        j++;
                    }
                }
            }

            if(x[i].back()==n-1)
            {

                k=1;
                j=x[i].size()-2;
                if(j>-1)
                {
                    while(x[i][j]==x[i][j+1]-1)
                    {
                        k++;
                        j--;
                    }
                }
            }
            if(k+a>=n)
            {
                a=a+k-1;
                k=0;
            }
        }
        m+=(a+1)*(k+1);
    }
    return m-25;
}

int sear(char s)
{
    string w="abcdefghijklmnopqrstuvwxyz";
    int a=0;
    int i=-1;
    while(a==0)
    {
        i++;
        if(w[i]==s)
        {
            a++;
        }
    }
    return i;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>x[26] ;
    int i,j, n, m=0;
    string s;
    cin>> n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        j=sear(s[i]);
        x[j].push_back(i);
    }
    cout<<jum(n, x)%998244353<<endl;
}
