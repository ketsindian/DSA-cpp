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
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
vector<int> v;

vector<int> preorderTraversal(TreeNode* root) {
    if(root==NULL) return v;
    v.push_back(root->val);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
    return v;
}

queue<TreeNode*> q;
vector<vector<int>> res;
//vector<vector<int>> levelOrder() {
//    while (!q.empty()){
//        TreeNode root=*q.front();
//        q.pop();
//        v.push_back(root.left->val);
//        v.push_back(root.right->val);
//        q.push(root.left);
//        q.push(root.right);
//    }
//    res.push_back(v);
//    levelOrder()
//}
vector<vector<int>> levelOrder(TreeNode* root) {
    q.push(root);
    vector<int> v;
    while (!q.empty()){
        TreeNode root=*q.front();
        q.pop();
        int len=q.size();
        while(len--){
            v.push_back(root.val);
        }
        q.push(root.left);
        q.push(root.right);
    }
}

int main (){
        TreeNode* tree=new TreeNode(1);
        tree->right=new TreeNode(2);
        tree->right->left=new TreeNode(3);
        vector<vector<int>> res=levelOrder(tree);
        for (auto i :res){
            for (auto j:i){
                cout<<j<<" , ";
            }
            cout<<endl;
        }
}