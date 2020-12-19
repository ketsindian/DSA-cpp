#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
typedef map<ll ,ll> MLL;
#define lim 10000007
#define mod 1000000007

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    stack<int> s1;
    stack<int> s2;
    ListNode* head1=l1;
    ListNode* head2=l2;
    while(head1!=NULL){
        s1.push(head1->val);
        head1=head1->next;
    }
    while(head2!=NULL){
        s2.push(head2->val);
        head2=head2->next;
    }
    ListNode* resHead=new ListNode();
    stack<int> sm=s1.size()>s2.size()?s2:s1;
    stack<int> lg=s2==sm?s1:s2;
    stack<int> ress;
    int carry=0;
    ListNode* res=resHead;
    while(!sm.empty()){
        int sum=sm.top()+lg.top()+carry;
        carry=sum/10;
        sm.pop();
        lg.pop();
        ress.push(sum%10);
//        res->next=new ListNode(sum%10);
//        res=res->next;
    }
    while(!lg.empty()){
        ress.push(lg.top()+carry);
//        res->next=new ListNode(lg.top()+carry);
        lg.pop();
        carry=0;
    }
    if(carry!=0){
        ress.push(carry);
    }
    res->val=ress.top();
    ress.pop();
    while(!ress.empty()){
        res->next=new ListNode(ress.top());
        res=res->next;
        ress.pop();
    }
    cout<<s1.size()<<s2.size();
    return resHead;
}


int main (){
    ListNode* l1=new ListNode(7);
    ListNode* l2=new ListNode(5);
//    l1->next=new ListNode(2);
//    l1->next->next=new ListNode(4);
//    l1->next->next->next=new ListNode(3);
//    l1->next->next->next->next=new ListNode(3);

//    l2->next=new ListNode(6);
//    l2->next->next=new ListNode(4);
//    l2->next->next->next=new ListNode(4);

    ListNode* res=addTwoNumbers(l1,l2);
    while(res->next!=NULL){
        cout<<res->val;
        res=res->next;
    }
}