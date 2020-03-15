#include <bits/stdc++.h>
#define ll int
#define lim 10000
using namespace std;

ll a[lim];
ll b[lim];
int main(){
    a[1]=-1;
    a[2]=-1;
    for(ll i=3;i<lim;i++){
        if(i%2!=1){
            a[i]=i-1;
        } else{
            a[i]=i-2;
        }
    }
    for(ll i=2;pow(2,i)<lim;i++){
        a[(int)pow((int)2,i)]=-1;
            a[(int)pow((int)2,i)+(int)pow((int)2,i-1)]=(int)pow((int)2,i);
    }
    for(ll i=1;i<lim;i++){
        b[i]=b[i-1]+a[i];
    }
    ll t,l,r;
    cin>>t;
    while(t--){
        cin>>l;
        cin>>r;
        cout<<b[r]-b[l]<<endl;
    }
}

