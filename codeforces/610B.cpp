#include <bits/stdc++.h>
#define ll int
#define lim 11000000
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,p,k;
        cin>>n>>p>>k;
        ll v[n];
        ll cost[n];
        for(ll i=0;i<n;i++){
            ll tmp;
            cin>>tmp;
            v[i]=tmp;
        }
        sort(v,v+n);
        cost[0]=v[0];
        cost[1]=v[1];
        for(ll i=2;i<n;i++){
            cost[i]=v[i]+cost[i-2];
        }
//        for(ll i=0;i<n;i++){
//            cout<<cost[i]<<" ";
//        }
        ll res;
        for(ll i=0;i<n;i++){
            if(cost[i]<=p){
               res=i+1;
            }
        }
        res=cost[0]>p?0:res;
        cout<<res<<endl;
    }
}