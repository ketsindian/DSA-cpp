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
        string s;
        cin>>s;
        char* p=&s[0];
        ll i=0;
        ll cnt=0;
        while(i<s.size()-1){
            if(s[i]==s[i+1]){
                if(i+1<s.size()){
                    i++;
                }
                continue;
            }else{
                cnt++;
                if(i+1<s.size()){
                    i++;
                }
                if(i+1<s.size()){
                    i++;
                }
            }

        }
        cout<<cnt<<endl;
    }
}