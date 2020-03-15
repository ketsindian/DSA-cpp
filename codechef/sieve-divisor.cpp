#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    int pn[100000];
    for(ll i=2;i<100001;i++){
        if(pn[i]==0){
            for(ll j =i*i;j<100001;j+=i) {
                pn[j] = 1;
            }
        }
    }

    vector<int> primes;
    for(ll i=2;i<100001;i++){
        if(pn[i]==0){
            primes.push_back(i);
        }
    }
    while(t--){
        ll a,b;
        cin>>a;
        cin>>b;
        ll cnt=0;
        for(ll i=a;i<b+1;i++){
            if(pn[2*pn[i]]==0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

}
