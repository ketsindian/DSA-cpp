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
    while(t--){
        ll n,k;
        cin>>n>>k;
        VLL a;
        for (int i = 0; i < n; ++i) {
            ll t;
            cin>>t;
            a.push_back(t);i
        }
        VLL z(a);
        for (int j = 0; j < n; ++j) {
            z.push_back(a[j]);
        }
        ll max=z[0];
        ll max_so_far=z[0];
        for (auto l = z.begin()+1; l < z.end(); ++l) {
            max_so_far=max(max_so_far+*l,*l)
        }
    }
}
