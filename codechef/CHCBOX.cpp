#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
typedef map<ll ,ll> MLL;
#define lim 10000007
#define mod 1000000007

int main (){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        VLL lookup;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        ll mx=LONG_LONG_MIN;
        for(ll s:a){
            if(s>mx)
                mx=s;
        }
        ll ind=-1;
        for(ll i=0;i<n;i++){
            if(a[i]==mx)
//                ind=i;
                lookup.push_back(i);
        }
//        cout<<n-ind-1<<endl;

        ll cnt=0;
        for (int i = 1; i < n; ++i) {
            bool flag=true;
//            cout<<*min_element(lookup.begin(),lookup.end())<<endl<<*max_element(lookup.begin(),lookup.end())<<endl;
                if((*min_element(lookup.begin(),lookup.end())+i)%n<(n+1)/2) {
                    flag = false;
                }
                if((*max_element(lookup.begin(),lookup.end())+i)%n<(n+1)/2) {
                    flag = false;
                }
            if(flag)
                cnt++;
        }
        cout<<cnt<<endl;
    }
}