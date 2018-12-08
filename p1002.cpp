//稍微复杂的dp
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
long long a[40][40]={0};
void h(int x,int y){
    a[x][y]=-1;
    a[x-1][y-2]=-1;
    a[x-2][y-1]=-1;
    a[x+1][y-2]=-1;
    a[x-1][y+2]=-1;
    a[x-2][y+1]=-1;
    a[x+2][y-1]=-1;
    a[x+1][y+2]=-1;
    a[x+2][y+1]=-1;
}
int main(){
    long long x,y,n,m;
    cin>>n>>m>>x>>y;
    h(x+1,y+1);
    
    a[1][1]=1;
    for(int i=1;i<=n+1;++i){
    	for(int j=1;j<=m+1;++j){
            if(a[i][j]==-1) continue;
            if(a[i][j-1]!=-1) a[i][j]+=a[i][j-1];
            if(a[i-1][j]!=-1) a[i][j]+=a[i-1][j];
    	}
    }
    
    cout<<a[n+1][m+1];
    return 0;
}
