#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
#define lim 10000007
#define mod 1000000007

int main (){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v;
        for (ll i = 0; i <n ; i++) {
            ll tmp;
            cin>>tmp;
            v.push_back(tmp);
        }
        vector<ll> sum;
        ll su=0;
        for(ll i=0;i<n;i++){
            if(v[i] %2==1 ){
                su++;
            }
            sum.push_back(su);
        }
        ll q;
        cin>>q;
        while(q--){
            ll l,r;
            cin>>l>>r;
            if(l==r ){
                if( v[l-1]%2==0)
                cout<<"EVEN"<<endl;
                else
                    cout<<"ODD"<<endl;
            }else{
                if(sum[r-1]-sum[l-1]==r-l){
                    cout<<"ODD"<<endl;
                }else{
                    cout<<"EVEN"<<endl;
                }
            }

        }
    }
}