#include <bits/stdc++.h>
using namespace std;
typedef int ll;

int main (){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll s[n];
        ll v[n];
        ll p[n];
        for(ll i = 0 ; i <n; i++){
            ll tmp1,tmp2,tmp3;
            cin>>tmp1>>tmp2>>tmp3;
            s[i]=tmp1;
            p[i]=tmp2;
            v[i]=tmp3;
        }
        ll max=-1;
        for(ll i=0;i<n;i++){
            s[i]++;
//            ll sum=p[i]%s[i]==0?p[i]/s[i]:p[i]/s[i]+1;
            ll sum=p[i]/s[i];
            if(sum *v[i]>max){
                max=sum*v[i];
            }
        }
        cout<<max<<endl;
    }
    return 0;
}