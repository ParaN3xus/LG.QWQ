#include <bits/stdc++.h>
using namespace std;
int main(){
    long long  n;
    cin>>n;
    long long a[100000]={0};
    long long m,p1,s1,s2;
    long long lo=0,hu=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    cin>>m>>p1>>s1>>s2;
    a[p1]+=s1;
    for(int i=1;i<m;i++)
        lo+=a[i]*(m-i);
    for(int i=m+1;i<=n;i++)
        hu+=a[i]*(i-m);
    long long minn=max(lo,hu)-min(lo,hu);
    long long qwq=m;
    if(lo==hu) {cout<<m;
    }
    for(int i=1;i<m;i++){
        if(max(lo+(m-i)*s2,hu)-min(lo+(m-i)*s2,hu)<minn) {
            minn=max(lo+(m-i)*s2,hu)-min(lo+(m-i)*s2,hu);
            qwq=i;
        }
    }
    for(int i=m+1;i<=n;i++){
        if(max(lo,hu+(i-m)*s2)-min(lo,hu+(i-m)*s2)<minn) {
            minn=max(lo,hu+(i-m)*s2)-min(lo,hu+(i-m)*s2);
            qwq=i;
        }
    }
    cout<<qwq;
    return 0; 
}
