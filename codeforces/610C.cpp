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
        for(ll i=1;i<k;i++){
//            cost[i]=v[i]+cost[i-1];
            cost[i]=v[i];
        }
        for(ll i=k;i<n;i++){
            cost[i]=v[i]+cost[i-k];
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
//        res=res<k?1:res;
        res=cost[0]>p?0:res;

        cout<<res<<endl;
    }
}