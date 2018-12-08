//睾精(雾)
#include <iostream>
#include <algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n;
    char a[200]={0};
    char b[200]={0};
    cin>>n;
    int max=0;
    int l=0;
    int d=0;
    for(int i=1;i<=n;i++){
        scanf("%s",a);
        if(strlen(a)==l){
            for(int j=0;j<strlen(a);j++){
                if(a[j]>b[j]) {d=1;break;
                }
                if(a[j]<b[j]) break;
            }
            if(d==1){
            for(int j=0;j<strlen(a);j++){
                b[j]=a[j];
            }
            l=strlen(a);
            max=i;
            d=0;
            }
        }
        if(strlen(a)>l){
            for(int j=0;j<strlen(a);j++){
                b[j]=a[j];
            }
            l=strlen(a);
            max=i;
            d=0;
            }
        
    }
    cout<<max<<endl;
    for(int i=0;i<l;i++){
        cout<<b[i];
    }
    
    return 0;
}
