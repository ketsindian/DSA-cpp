#include <bits/stdc++.h>
# define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n;
        cin>>m;
        ll max=-1;
        vector<pair<int,int  v;
        for(ll i=0;i<n;i++){

            ll tmp;
            cin>>tmp;
            if(tmp>max) max=tmp;
            v.emplace_back(tmp,max);
        }
        for(ll i=0;i<m;i++){
            ll tmp;
            cin>>tmp;
            cout<<v[tmp-1].second<<endl;
        }
    }

    return 0;
}
