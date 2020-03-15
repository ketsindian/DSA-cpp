#include <bits/stdc++.h>

using namespace std;
typedef int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
#define lim 10000007
#define mod 1000000007

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        ll cnt = 0;
        cin >> n >> m;
        ll v[n][m];
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                ll tmp;
                cin >> tmp;
                v[i][j] = tmp;
            }
        }
//        for(ll i=0;i<n;i++){
//            for(ll j=0;j<m;j++){
//                cout<<v[i][j];
//            }
//        }
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                for (ll k = 0; k <= min(n, m); k++) {
                    if (j - k >= 0 && j + k < m && i - k >= 0 && i + k < n) {
//                        vector<ll> ti, tj;
//                        for (ll z = i - k; z <= i + k; z++) {
//                            ti.push_back(v[z][j]);
//                        }
                        bool isPalindrome = true;
                        for (ll z = k; z > 0; z--) {
                            if (v[i - z][j] == v[i + z][j]) {
                                continue;
                            } else {
                                isPalindrome=false;
                                break;
                            }
                        }
                        if(!isPalindrome){
                            break;
                        }
                        bool isPalindrome2 = true;
                        for (ll z = k; z > 0; z--) {
                            if (v[i][j-z] == v[i][j+z]) {
                                continue;
                            } else {
                                isPalindrome=false;
                                break;
                            }
                        }
//                        vector<ll> tit(ti.end() - ti.begin());
//                        reverse_copy(ti.begin(), ti.end(), tit.begin());
//                        if (tit != ti) {
//                            break;
//                        }
//                        for (ll z = j - k; z <= j + k; z++) {
//                            tj.push_back(v[i][z]);
//                        }
//                        vector<ll> tjt(tj.end() - tj.begin());
//                        reverse_copy(tj.begin(), tj.end(), tjt.begin());
//                        if (tjt != tj) {
//                            break;
//                        }
                        if(isPalindrome2 && isPalindrome)
                            cnt++;
                    } else {
                        break;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
}