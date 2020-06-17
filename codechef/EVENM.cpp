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
        vector<VLL> m;
        for (int i = 0; i < n; ++i) {
            VLL tmp;
            if(n%2!=0 || i%2==0){
                for (int j = 0; j < n; ++j) {
                    tmp.push_back((j+1)+n*(i));
                }
            }else{
                for (int j = n-1; j >-1; --j) {
                    tmp.push_back((j+1)+n*(i));
                }
            }
            m.push_back(tmp);
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}