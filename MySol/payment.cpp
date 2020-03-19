#include <bits/stdc++.h>
using namespace std;

int s=0;

bool ispr (int a){
    if(a==1){
        return false;
    }
    if(a==2 or a==3){
        return true;
    }
    for(int i=2; i*i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

void func (int a){
    a++;
    if(a==-2){}
    else{
        int n=a-1;
        while(a--){
            if((n-a>1 or a==n) and ispr(a)){
                s++;
                if(n-a>1) {func(n-a);}
                //cout<<a<<' '<<n-a<<endl;
                break;
            }
        }
    }
}

int main()
{
    int n,i;
    cin>>n;
    func(n);
    //cout<<ispr(n)<<endl;
    //cout<<ispr(i)<<endl;
    cout<<s<<endl;

    return 0;
}
