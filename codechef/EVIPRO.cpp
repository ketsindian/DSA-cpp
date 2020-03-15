#include <bits/stdc++.h>

#define ll long long int
#define lim 10000007
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        string str,s;
        cin>>s;
        str=s;
        ll l=0,r=0;
        ll sum=0;
        for(ll i=0;i<str.length();i++){
            for(ll j=i;j<str.length();j++){
                for(ll k=i;k<=j;k++){
                    if(str[k]=='0'){
                        str[k]='1';
                    }
                    else{
                        str[k]='0';
                    }
                }
                for(ll z=0;z<str.length();z++){
                    if(str[z]==str[z+1]){
                        sum++;
                    }
                }
                str=s;
            }
        }
        cout<<sum<<endl;
    }
}