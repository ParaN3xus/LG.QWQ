#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    string a;
    cin>>a;
    int s;
    int l=a.length();
    cin>>s;
    int x=0,y=0;
    int t=s%l,ys=0;
    int q=0,p=0;
    if(s>=l){
        ys=ceil(s/l);
        for(int i=0;i<l; i++){
        if(a[i]=='N'){
            p++;
        }
        else if(a[i]=='S'){
            p--;
        }
        else if(a[i]=='W'){
            q--;
        }
        else if(a[i]=='E'){
            q++;
        }
    }
    x+=q*ys;
    y+=p*ys;
    }
    for(int i=0;i<t;i++){
        if(a[i]=='N'){
            y++;
        }
        else if(a[i]=='S'){
            y--;
        }
        else if(a[i]=='W'){
            x--;
        }
        else if(a[i]=='E'){
            x++;
        }
    }
    cout<<x<<' '<<y;
    return 0;
}
