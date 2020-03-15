#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
#define lim 10000007
#define mod 1000000007

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, p;
        cin >> n >> p;
        ll a[n];
        for (ll i = 0; i < n; ++i) {
            char tmp;
            cin >> tmp;
            a[i] = (ll) tmp-96;
        }
        ll i = 0,sum = 0, j=0,gcnt = 0;
        while (i < n&& j<n) {
            if (a[i] == p) {
                i++;
//                j=i;
                gcnt++;
                sum = 0;
            } else {
                if (sum+a[i] == p) {
                    gcnt++;
                    j++;
                    sum=0;
                }else if(sum+a[i]<p){
                    sum += a[i];
                    i++;
                }else if(sum+a[i]>p){
                    sum-=a[j];
                    j++;
                }
            }
        }
        cout<<gcnt<<endl;
    }
}
