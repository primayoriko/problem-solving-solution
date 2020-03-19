/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i,n,k,a,b,d,e;
    cin>>n>>k;
    if(n%2==0)
    {
        b=n/2;
    }
    else
    {
        b=(n-1)/2;
        k--;
    }
    if (k>b)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int y[b];
        for(i=0;i<b;i++)
        {
            y[i]=2;
        }
        int x=b;
        a=0;
        while(x>k)
        {
            d=pow(2,a);
            e=0;
            for(i=0;i<b;i+=(2*d))
            {
                if(y[i]==y[i+d])
                {
                    y[i]=y[i]+y[i+d];
                    y[i+d]=0;
                    x-=1;
                    e+=1;
                }
                if(x==k)
                {
                    break;
                }
            }
            if(e==0)
            {
                break;
            }
            a+=1;
        }
        if(x==k)
        {
            cout<<"YES"<<endl;
            if(n%2==1)
            {
                cout<<"1"<<" ";
            }
            for(i=0;i<b;i++)
            {
                if(y[i]!=0)
                {
                    cout<<y[i]<<" ";
                }
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    int i,j,k,a,b,c,d,e;
    cin>>n>>k;
    if(n%2==0)
    {
        b=n/2;
    }
    else
    {
        b=((n-1)/2)+1;

    }
    if (k>b)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        vector <int> z;
        c=0;
        a=n;
        while(c==0)
        {
            z.push_back(a%2);
            a = (a-a%2) / 2;
            if (a==0)
            {
                c++;
            }
        }
        for(auto i : z)
        {
            cout<<i<<" ";
        }

    }
}
