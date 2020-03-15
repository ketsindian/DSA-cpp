#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
//    for(ll i=0;i<1000000;i++){
//        for(ll j=0;j<100000;j++){
//            if(i*j==i+j){
//                cout<<i<<"  "<<j<<endl;
//            }
//        }
//    }
//    cout<<"exit";

    ll t;
    cin>>t;
    while(t--){
        ll n,tmp;
        ll cnt=0;
        ll cntz=0;
        cin>>n;
        while(n--){
            cin>>tmp;
            if(tmp==2){
                cnt++;
            }
            if(tmp==0){
                cntz++;
            }

        }
        cout<<(cnt*(cnt-1)/2)+(cntz*(cntz-1)/2)<<endl;
    }
    return 0;
}