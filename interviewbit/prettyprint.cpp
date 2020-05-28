#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
typedef map<ll ,ll> MLL;
#define lim 10000007
#define mod 1000000007

vector<vector<int> > prettyPrint(int A) {
    
}

int main (){
    int a;
    cin>>a;
    vector<vector<int>> ans=prettyPrint(a);

    for(vector<int> v:ans){
        for(int vi:v){
            cout<<vi<<" ";
        }
        cout<<endl;
    }
}


