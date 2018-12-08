//一维数组dp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l=1;
    int a[200000]={0};
    int sum[200000]={0};
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	sum[i]+=sum[i-1]+a[i];
    }
    int ans=-10000;
    int minsum=0;
    for(int i=0;i<n;i++){
    	ans=max(ans,sum[i]-minsum);
    	minsum=min(sum[i],minsum);
    }
    cout<<ans;
    return 0; 
}
