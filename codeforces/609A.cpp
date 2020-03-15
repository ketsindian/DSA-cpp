#include <bits/stdc++.h>
#define ll int
#define lim 11000000
using namespace std;

int main(){
    bool sieve[lim];

    for(ll i=2;i<lim;i++){
     if(!sieve[i]){
         for(ll j=i+i;j<lim;j+=i){
             sieve[j]=true;
         }
     }
    }

    vector<ll> v;
    for (ll i=2;i<lim;i++){
        if(sieve[i])
            v.push_back(i);
//        cout<<i<<endl;
    }

    ll a,b,n;
    cin>>n;
    for(auto i=v.begin();i<v.end();i++){
        if(binary_search(v.begin(),v.end(),*i+n)){
            cout<<*i+n<<" "<<*i<<endl;
            break;
        }
    }

}