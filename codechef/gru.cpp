#include <bits/stdc++.h>
#define  ll  long long int
using namespace std;

int main(){

    ll n,k,t;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>k;
        ll count=0;
        ll temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            if((temp+k)%7==0){
                count++;
            }
        }
        cout<<count<<endl;

    }

    return 0;
}
