//dfs
#include<bits/stdc++.h>
using namespace std;
int a[100]={0},b[100]={0},c[100]={0},d[100]={0},n,tot;
void search(int i){
    int j;
    for(j=1;j<=n;j++){
        if(b[j]==0&&c[i+j]==0&&d[i-j+n]==0){
            a[i]=j;
            b[j]=1;
            c[i+j]=1; d[i-j+n]=1;
            if(i==n){
                int l;
                tot++;
                if(tot<=3){          				
                    for(l=1;l<=n;l++){
           		    	cout<<a[l]<<" ";
          		}
           		cout<<endl;
        	}
        }
            else search(i+1);
            b[j]=0;c[i+j]=0;d[i-j+n]=0;
    }
    }
    }
int main(){
    cin>>n;
    search(1); 
    cout<<tot;
    return 0;
}
