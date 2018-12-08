//简单dp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int q;
    cin>>q;
    int x,y;
    int a[500][500]={0};
    int b[500][500]={0};
    for(int p=0;p<q;p++) {
    	cin>>x>>y;
    	b[x][y]=1;
    }
    a[1][0]=1;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		if(b[i][j]!=1)a[i][j]=a[i-1][j]+a[i][j-1];
    }
}
    cout<<a[n][m];
    return 0;
}
