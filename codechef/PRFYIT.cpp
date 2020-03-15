#include <bits/stdc++.h>
#define ll int
#define lim 11000000
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        ll cnt1=0;
        ll i=0;
        while(i<str.length()-1){
            if((str[i]=='1' && str[i+1]=='0' && str[i+2]=='1') || (str[i]=='0' && str[i+1]=='1' && str[i+2]=='0')){
                i+=3;
                cnt1++;
            }
            else{
                i++;
            }
        }
        cout<<cnt1<<endl;
    }
}
