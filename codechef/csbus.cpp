#include <bits/stdc++.h>

#define  ll  long long int
using namespace std;

int main (){
    ll t;
    ll n;
    string s;
    cin>>t;
    while(t--){
        map<char,int> mp;
        cin>>n;
        cin>>s;
        for(char c:s){
            mp[c]++;
        }
        cout<<(mp['1']+1)*mp['1']/2<<endl;
    }

    return 0;
}
