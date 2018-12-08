//模拟
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[1000];
    int b[1000];
    memset(a,-1,1000);memset(b,-1,1000);
    int n,m;
    int sum=0;
    cin>>n>>m;
    int p=0;
    for(int i=0;i<m;i++){
    	cin>>a[i];
    	int t=1;
    	for(int j=0;j<n;j++){
    		if(a[i]==b[j]) {t=0;break;
    		}
    	}
    	if(t==1) {sum++;b[p]=a[i];p++;
    	}
    	if(p>=n){
    		p=0;
    	}
    }
    cout<<sum;
    return 0; 
}
