//用两个一维数组模拟二维
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
    short a,n;
    short q[1001][1001]={0};
    cin>>a>>n;
    short x1,x2,y1,y2;
    for(int p=1;p<=n;p++){
    	cin>>x1>>x2>>y1>>y2;
    	for(int i=x1;i<=y1;i++){
    		for(int j=x2;j<=y2;j++){
    		q[i][j]++;
    	}
    	}
    }
    for(int i=1;i<=a;i++){
    	for(int j=1;j<=a;j++){
    		cout<<q[i][j]<<' ';
    	}cout<<endl;
    }
    return 0;
}
