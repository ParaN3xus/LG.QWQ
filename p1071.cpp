//模拟
#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[100]={0};
    char b[100]={0};
    char c[100]={0};
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    int zm[26]={0};
    	for(int i=0;i<strlen(a);i++){
    		zm[a[i]-'A']++;
    		for(int j=0;j<i;j++){
    			if(a[i]==a[j]&&b[i]!=b[j]) {
    				cout<<"Failed\n";
                    return 0;
  				  }
  				if(a[i]!=a[j]&&b[i]==b[j]){
    				cout<<"Failed\n";
                    return 0;
  				  }
    		}
    	}
    for(int i=0;i<26;i++){
    	if(zm[i]==0) {
            cout<<"Failed";
    		return 0;
  		}
    }
    for(int i=0;i<strlen(c);i++){
    	for(int j=0;j<strlen(a);j++){
    		if(c[i]==a[j]) {c[i]=b[j];break;
    		}
    	}
    }
     for(int i=0;i<strlen(c);i++){
    	cout<<c[i];
    }
    cout<<endl;
    return 0; 
}
