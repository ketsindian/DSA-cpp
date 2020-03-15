#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll diff =LLONG_MAX;
        for(ll i=1;i<=sqrt(n);i++){
            if(n%i==0 && abs(i-n/i)<diff){
                diff=abs(i-n/i);
            }
        }
        cout<<diff<<endl;
    }
    return 0;
}
