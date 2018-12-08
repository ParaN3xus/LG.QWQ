//100分简单dp
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[100001]= {0};
    int f[100001]= {0};
    int p=1;
    int g[100001]= {0};
    while(cin>>a[p]) {
        
        f[p] = 1;
        g[p]=1;p++;
    }
    int m=0,ma=0;
    p-=1;
    for(int i = 2; i <= p; i++) {

        for(int j = 1; j < i; j++) {
            if(a[j] >= a[i]) f[i] = max(f[i],f[j]+1);
            if(a[j] < a[i]) g[i] = max(g[i],g[j]+1);
        }
        m=max(m,f[i]);
        ma=max(ma,g[i]);
    }
    cout<<m<<endl<<ma;
    return 0;
}
