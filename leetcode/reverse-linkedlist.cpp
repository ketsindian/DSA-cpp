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

void printList(ListNode* head){
    while (head!= nullptr){
        cout<<head->val<<" - ";
        head=head->next;
    }
}


ListNode* reverseList(ListNode* head) {
    if(head== nullptr || head->next== nullptr){ return head;}
    ListNode* a= nullptr;
    ListNode *b=head;
    ListNode *c=b->next;
    ll k=0;
    while (b->next!= nullptr){
//        k++;
//        if (k%2==0){
//            a=a->next;
//            b=b->next;
//            c=c->next;
//            continue;
//        }
        b->next=a;
        a=b;
        b=c;
        c=b->next;
    }
    b->next=a;
    head=b;
    return head;
}


int main (){
    ListNode* head=new ListNode(1,new ListNode(2,new ListNode(3,new ListNode(4,new ListNode(5,new ListNode(6))))));
    printList(reverseList(head));
}