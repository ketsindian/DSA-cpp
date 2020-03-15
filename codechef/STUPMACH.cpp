#include <bits/stdc++.h>
#define ll int
#define lim 11000000
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>> n;
        ll v[n];
        for(ll i=0;i<n;i++){
            ll tmp;
            cin>>tmp;
            v[i]=tmp;
        }
        ll b[n];
        b[0]=v[0];
        ll sum=0;
        for(ll i=1;i<n;i++){
            b[i]=min(b[i-1],v[i]);
//            sum+=b[i];
        }
        for(ll i=0;i<n;i++){
//            b[i]=min(b[i-1],v[i]);
            sum+=b[i];
        }

        cout<<sum<<endl;
    }
}