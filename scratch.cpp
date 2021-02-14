#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
typedef map<ll ,ll> MLL;
#define lim 10000007
#define mod 1000000007

int getRich(int initialEnergy, vector<int> energy, vector<int> coins) {

    int dp[101][101];

    int i, e, n = energy.size();

    for(i = n - 1; i >= 0; --i) {
        for(e = 0; e <= n; ++e) {
            if(i == n - 1) {
                dp[i][e] = coins[i];
            } else {

                if(e - 1 >= 0) {
                    dp[i][e] = dp[i + 1][min(e + energy[i] - 1, n)];
                    dp[i][e] = max(dp[i][e], coins[i] + dp[i + 1][e - 1]);
                }
                if(e == 0) {
                    dp[i][e] = max(dp[i][e], coins[i]);
                }
            }
        }
    }
    int ene = min((int)n, initialEnergy);
    return dp[0][ene];
}

int main (){
    int ini=0;
//    cin>>ini;
//    int a=5,b=5;
//    cin>>a;
    vector<int> v;
//    while(a--){
//        int q;
//        cin>>q;
//        v.push_back();
//    }
//    v.push_back(1);
//    v.push_back(5);
//    v.push_back(3);
//    v.push_back(3);
//    v.push_back(1);

    v.push_back(2);
    v.push_back(1);
    v.push_back(1);

//    cin>>b;
    vector<int> w;
//    while(b--){
//        int q;
//        cin>>q;
//        w.push_back(q);
//    }
//    w.push_back(3);
//    w.push_back(23);
//    w.push_back(9);
//    w.push_back(2);
//    w.push_back(2);

    w.push_back(11);
    w.push_back(5);
    w.push_back(7);
    cout<<getRich(ini,v,w);
}