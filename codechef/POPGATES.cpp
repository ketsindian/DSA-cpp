#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
#define lim 10000007
#define mod 1000000007

int main (){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        vector<char> a;
        cin>>n>>k;
        for(ll j=0;j<n;j++){
            char tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        for(ll j=0;j<k;j++){
            char b=a[a.size()-1];
            if(b=='H'){
                for(ll i=0;i<a.size();i++){
                    if(a[i]=='H'){
                        a[i]='T';
                    }else{
                        a[i]='H';
                    }
                }
            }
            a.pop_back();
        }
        ll fcount=0;
        for(ll i=0;i<n-k;i++){
            if(a[i]=='H'){
                fcount++;
            }
        }
        cout<<fcount<<endl;
    }
}