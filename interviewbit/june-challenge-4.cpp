#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
typedef map<ll ,ll> MLL;
#define lim 10000007
#define mod 1000000007

void reverseString(vector<char> & s){
    if(!s.empty()){
        auto i=s.begin();
        auto j=--s.end();
        while(i!=j && i<j){
            char tmp=*i;
            *i=*j;
            *j=tmp;
            i++;
            j--;
        }
    }

}

int main (){
    vector<char> s;
//    s.push_back('h');
//    s.push_back('e');
//    s.push_back('l');
//    s.push_back('l');
//    s.push_back('o');
//    s.push_back('w');
//    s.push_back('n');
    reverseString(s);
    for (int i = 0; i < s.size(); ++i) {
        cout<< s[i]<<endl;
    }
}