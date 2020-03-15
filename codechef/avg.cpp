#include<bits/stdc++.h>
#define ll long  double
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        cout<<fixed<<setprecision(6);
        long long int n,m;
        cin>>n;
        cin>>m;
        list<ll> v;
        while(n--){
            ll tmp;
            cin>>tmp;
            v.push_back(tmp);
        }
        v.sort();
        for(ll i=0;i<m;(long long int)i++){
            v.pop_back();
            v.pop_front();
        }
        ll ans=accumulate(v.begin(),v.end(), 0)/v.size();
        cout<<(double)accumulate(v.begin(),v.end(), 0)/v.size()<<endl;
    }
    return 0;
}