#include <bits/stdc++.h>
using namespace std;
typedef long long ll ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
typedef map<ll ,ll> MLL;
#define lim 10000007
#define mod 1000000007

ll calculate_dist(pair<ll, ll> x, pair<ll,ll> y){
    return abs(x.first-y.first)+abs(x.second-y.second);
}

ll calculate (string str[], string S, ll K_x) {
    // Write your code here
    map<char, pair<ll,ll>> mp;
//    cout<<str[0]<<endl<<str[1]<<endl;
//    cout<<K_x<<endl;

    for (ll i = 0; i < K_x; ++i) {
        ll j=0;
        for(char x:str[i]){
            pair<ll,ll> p (i,j);
            mp.insert(pair<char,pair<ll,ll>>(x,p));
            j++;
        }
    }
//    for (auto itr=mp.begin();itr!=mp.end();itr++) {
//        cout<<itr->first<<" : "<<itr->second.first<<","<<itr->second.second<<endl;
//    }
    ll sum=calculate_dist(pair<ll,ll>(0,0),mp[S[0]]);
    for (ll i = 0; i < S.length()-1; i++) {
        if(mp.find(S[i])==mp.end() || mp.find(S[i+1])==mp.end())
            return -1;
        sum+=calculate_dist(mp[S[i]],mp[S[i+1]]);
    }
    return sum;
}

int main (){
    ll K_x, K_y;
    cin >> K_x >> K_y;
    string str[K_x];
    for(ll i_in_ = 0 ; i_in_ < K_x ; i_in_++ ){
        cin>>str[i_in_];
    }
    string S;
    cin>>S;

    ll out_;
    out_ = calculate(str, S, K_x);
    cout << out_;
}