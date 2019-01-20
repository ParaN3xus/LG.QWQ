//STLmap代码

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <map>
using namespace std;
map<string,int> zx;
string s;
int main() {
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        zx[s]=1;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>s;
        if(zx[s]==1){
            cout<<"OK"<<endl;
            zx[s]=2;
        }
        else if(zx[s]==2){
            cout<<"REPEAT"<<endl;
            
        }
        else cout<<"WRONG"<<endl;
    }
    return 0;
}
