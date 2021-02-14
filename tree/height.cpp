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

void inorderTraversal(TreeNode* root) {
    if(root==NULL) return ;
    inorderTraversal(root->left);
    cout<<root->val<<" ";
    inorderTraversal(root->right);
}

int heightOfTree(TreeNode* root){
    if(root->right==nullptr && root->left== nullptr) return 1;
    if(root->right== nullptr) return heightOfTree(root->left)+1;
    if(root->left== nullptr) return heightOfTree(root->right)+1;
    return max(heightOfTree(root->left),heightOfTree(root->right))+1;
}

int main (){
    TreeNode* root=new TreeNode(8,new TreeNode(3,new TreeNode(1),
                                               new TreeNode(6,new TreeNode(4),new TreeNode(7))),new TreeNode(10,
                                                                                                                               nullptr,new TreeNode(14,new TreeNode(13),

                                                                                                                                                    nullptr)));
    inorderTraversal(root);
    cout<<endl<<heightOfTree(root)<<endl;

}
