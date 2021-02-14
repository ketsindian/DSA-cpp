#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
typedef map<ll ,ll> MLL;
#define lim 10000007
#define mod 1000000007

struct TreeNode {
    ll val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(ll x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(ll x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

struct ListNode {
    ll val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(ll x) : val(x), next(nullptr) {}
    ListNode(ll x, ListNode *next) : val(x), next(next) {}
};

vector<string> s;
string checkForXY(int i,vector<string> v){
    if(v.size()<4){
        return "N";
    }
    map<string,int> mp;
    for(vector<string>::const_iterator i=v.begin();i!=v.end();i++){
        cout<<(*i).substr(0,3);
        if((*i).substr(1,3)=="FAT")
            mp["FAT"]=mp["FAT"]++;
        if((*i).substr(1,4)=="CARB")
            mp["CARB"]=mp["CARB"]++;
        if((*i).substr(1,5)=="FIBER")
            mp["FIBER"]=mp["FIBER"]++;
    }
    string res;
    if(i==0){
        if((mp["FAT"]>=2 && mp["CARB"]==0 && i==1) &&(mp["FAT"]>=2 && mp["CARB"]==0 && i==2)){
//            check x or Y
            return "X";
        }
    }
    vector<string> resp;
    if(mp["FAT"]>=2 && mp["CARB"]==0 && i==1){
        return "X";
        int cnt=2;
        for(auto i=v.begin();i!=v.end();i++){
            if((*i).substr(0,3)=="FAT"){
                if(cnt>0){
                    cnt--;
                }else{
                    resp.push_back(*i);
                }
            }
        }
        for(auto i=resp.begin()+2;i!=resp.end();i++){
            s.push_back(*i);
        }
    }
    if(mp["FAT"]>=2 && mp["CARB"]==0 && i==2){
        return "Y";
    }
    return "N";
};

void prepareDish(vector<string> v){
    vector<string> input;
    for(auto i=v.begin();i!=v.end();i++) {
        for(auto j=s.begin();j!=s.end();j++){
            input.push_back(*j);
        }
        input.push_back(*i);
        checkForXY(1,input);
    }
}
int main (){
    int numberOfDays;
    cin >> numberOfDays; cin.ignore();
    vector<string> v;
    for (int i = 0; i < numberOfDays; i++) {
        string ingredient;
        cin >> ingredient; cin.ignore();
        v.push_back(ingredient);
    }
    prepareDish(v);

}