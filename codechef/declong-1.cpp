    #include <bits/stdc++.h>

    #define ll long long int
    using namespace std;

    int main() {
        ll t, n;
        cin >> t;

        while (t--) {
            map<ll, ll> mp;
            cin >> n;
            while (n--) {
                ll a, b;
                cin >> a;
                cin >> b;
                if (mp[a] < b) {
                    mp[a] = b;
                }
            }
            ll sum = 0;
            for (int i = 1; i < 9; i++) {
                sum += mp[i];
            }
            cout << sum << endl;
        }
        return 0;
    }
