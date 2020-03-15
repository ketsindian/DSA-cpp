#include <bits/stdc++.h>
#define ll int
#define lim 11000000
using namespace std;

int main(){
    ll n,m;
    cin>>n;
    cin>>m;
    vector<ll> a;
    map<ll,ll> ma;
    map<ll,ll> mb;
    for(ll i=0;i<n;i++){
        ll tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    for(ll i=0;i<n;i++){
        ll tmp;
        cin>>tmp;
        mb[tmp]++;
    }
    for(ll i=0;i<lim;i++){
        bool flag=true;
        ma.erase(ma.begin(),ma.end());
        for(auto itr=a.begin();itr<a.end();itr++){
            ma[(*itr+i)%m]++;
        }
        if(ma.size()==mb.size()){
            auto ai=ma.begin();
            auto bi=mb.begin();
            for(ai=ma.begin(), bi=mb.begin();ai!=ma.end();ai++,bi++){
                if(*ai!=*bi){
                    break;
                }
            }
            if(ma.end()==ai){
                flag=false;
                cout<<i<<endl;
                break;
            }
        }
    }

}