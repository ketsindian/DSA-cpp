#include <bits/stdc++.h>
#define  ll  long long int

using namespace std;
int main(){
    ll n,t;
    cin>>n;
    cin>>t;
    vector<ll> ar;
    for (ll i=0;i<n;i++){
        ll x;
        cin>>x;
        ar.push_back(x);
    }
    //    auto it =ar.begin();
//    for (ll & it : ar){
//        cout<<it<<endl;
//    }
    ll count =0;
    auto it1=ar.begin();
    auto it2=ar.begin()+1;
    while(it2!=ar.end() && it1!=ar.end()){
//        cout<<*it1<<*it2<<endl;
//        cout<<count;
        if(*it1-*it2<=t){
//            it1=it1++;

            if(*it1-*it2==t){
                count=count+1;
            }
            it2=it2+1;

        }
        else{
            it1=it1+1;
            it2=it2+1;
        }
    }

    cout<<count;
    return 0;
}
