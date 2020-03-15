#include <bits/stdc++.h>

#define ll long double
#define lim 10000007
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll a, m;
        cin >> a >> m;
        vector<ll> v;
        for (ll i = 1; i < m; i++) {
            ll n = (m - i) / a;
            ll z = n - (long long int) n;
//            ll y=;
            if (z == 0 && (long long int) n % (long long int) i == 0) {
//                if (!v.empty()) {
//                    if (n < v.back()) {
//                        ll tmp = v.back();
//                        v.pop_back();
//                        v.push_back(n);
//                        v.push_back(tmp);
//                    } else {
//                        v.push_back(n);
//                    }
//                } else {
//                    v.push_back(n);
//                }
                v.push_back(n);
            }
        }
        sort(v.begin(),v.end());
        cout << v.size() << endl;

        for (long double &itr : v) {
            cout << itr << " ";
        }
        cout << endl;
    }
}