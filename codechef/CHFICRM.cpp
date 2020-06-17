#include <bits/stdc++.h>
using namespace std;
typedef  int ll;
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
        map<ll,ll> mp;
        VLL a;
        mp[5]=0;
        mp[10]=0;
        mp[15]=0;
        ll n;
        cin>>n;
        bool flag=true;

        for (ll i = 0; i < n; ++i){
            ll tmp;
            cin>>tmp;
            a.push_back(tmp);
        }

        for (ll i = 0; i < n; ++i) {
            if(a[i]!=5 && i==0){
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
            if(a[i]==5){
             mp[5]++;
            }else if(a[i]==10){
                if(mp[5]<1){
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
                mp[10]++;
                mp[5]--;
            }
            else{
                if(mp[5]<2 && mp[10]<1){
                    flag=false;
                    cout<<"NO"<<endl;
                    break;
                }
                if(mp[10]>0){
                    mp[10]--;
                }else{
                    mp[5]--;
                    mp[5]--;
                }
                mp[15]++;
            }
        }
        if (flag)
            cout<<"YES"<<endl;

    }
}