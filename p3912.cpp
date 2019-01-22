//某素数筛法

#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int n;
int p;
bool a[100000010]={0};
int main()
{
	
	cin>>n;
	a[1]=1;
	int sum=n;
	for(int i=2;i*i<=n;i++){
		if(a[i]==0) //此语句没有即TLE
    for(int j=2*i;j<=n;j+=i){
			if(a[j]==0){
				a[j]=1;sum--;
			}
		}
	}
	cout<<sum-1;
	return 0;
}
