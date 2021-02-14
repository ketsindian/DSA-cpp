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

void levelOrderTransversalQueue(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()){
        TreeNode* node=q.front();
        q.pop();
        cout<<node->val<<" ";
        if(node->left!= nullptr) q.push(node->left);
        if(node->right!= nullptr) q.push(node->right);
    }
}

int heightOfTree(TreeNode* root){
    if(root->right==nullptr && root->left== nullptr) return 1;
    if(root->right== nullptr) return heightOfTree(root->left)+1;
    if(root->left== nullptr) return heightOfTree(root->right)+1;
    return max(heightOfTree(root->left),heightOfTree(root->right))+1;
}

void printGivenLevel(TreeNode* root,int level){
    if(root== nullptr) return;
    if(level==1){
        cout<<root->val<<" ";
        return;
    }
    printGivenLevel(root->left,level-1);
    printGivenLevel(root->right,level-1);
}

void printGivenLevelSpiral(TreeNode* root,int level,bool from_left){
    if(root== nullptr) return;
    if(level==1){
        cout<<root->val<<" ";
        return;
    }
    if(from_left) {
        printGivenLevelSpiral(root->left, level - 1,from_left);
        printGivenLevelSpiral(root->right, level - 1,from_left);
        return;
    }
    printGivenLevelSpiral(root->right, level - 1,from_left);
    printGivenLevelSpiral(root->left, level - 1,from_left);
}

void levelOrderTransversalStack(TreeNode* root){
    queue<TreeNode*> q;
    int height=heightOfTree(root);
    for (int i=1;i<height+1;i++){
        printGivenLevel(root,i);
    }
}

void levelOrderTransversalStackSpiral(TreeNode* root){
    queue<TreeNode*> q;
    int height=heightOfTree(root);
    bool from_left=true;
    for (int i=1;i<height+1;i++){
        from_left=!from_left;
        printGivenLevelSpiral(root,i,from_left);
    }
}


int main (){
    TreeNode* root=new TreeNode(8,new TreeNode(3,new TreeNode(1),
                                               new TreeNode(6,new TreeNode(4),new TreeNode(7))),new TreeNode(10,
                                                                                                             nullptr,new TreeNode(14,new TreeNode(13),

                                                                                                                                  nullptr)));
}