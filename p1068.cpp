//有点麻烦的排序(对我来说
#include <bits/stdc++.h>
using namespace std;
struct qwq{
    int number;
    int q;
};
qwq a[5000];
int cmp(qwq p1,qwq p2){
    if(p1.q>p2.q) return true;
    else if(p1.q==p2.q){
        if(p1.number<p2.number)return true;
        else return false;
    }
    else return false;
}
int main(){
    int n,m;
    int p;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i].number;
        cin>>a[i].q;
    }
    m=floor(m*1.5);
    int t=m;
    
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        if(i==t-1){
        p=a[i].q;i++;
        for(int j=i;j<n;j++){
            if(a[j-1].q== a[j].q){
                m++;
            }
            else break;
        } 
        break;
        }
    }
    cout<<p<<' '<<m<<endl;
    for(int i=0;i<m;i++){
    	if(i!=0)cout<<endl;
        cout<<a[i].number <<' '<<a[i].q ;
    }
    return 0;
}
