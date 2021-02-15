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

void leftViewTransversalQueue(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()){
        int n=q.size();
//        cout<<"size = "<<n<<endl;
        for (int i=1;i<n+1;i++){
            TreeNode* node=q.front();
            q.pop();
            if (i==1)cout<<node->val<<" ";
            if(node->left!= nullptr) q.push(node->left);
            if(node->right!= nullptr) q.push(node->right);
        }

    }
}

int heightOfTree(TreeNode* root){
    if(root->right==nullptr && root->left== nullptr) return 1;
    if(root->right== nullptr) return heightOfTree(root->left)+1;
    if(root->left== nullptr) return heightOfTree(root->right)+1;
    return max(heightOfTree(root->left),heightOfTree(root->right))+1;
}

int diameterOfTree(TreeNode* root,int *dia){
    if(root->right==nullptr && root->left== nullptr) return 1;
    if(root->right== nullptr) return diameterOfTree(root->left,dia)+1;
    if(root->left== nullptr) return diameterOfTree(root->right,dia)+1;
    int height=max(diameterOfTree(root->left,dia),diameterOfTree(root->right,dia))+1;
    *dia=diameterOfTree(root->left,dia)+diameterOfTree(root->right,dia)+1;
    *dia=max(height, *dia);
    return height;
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

void printLeftViewGivenLevel(TreeNode* root,int level,set<int> *visited,int orig_height){
    if(root== nullptr) return;
    if(level==1 && visited->find(orig_height)==visited->end()){
        cout<<root->val<<" ";
        visited->insert(orig_height);
        return;
    }
    printLeftViewGivenLevel(root->left,level-1,visited,orig_height);
    printLeftViewGivenLevel(root->right,level-1,visited,orig_height);
}

void leftViewStack(TreeNode* root){
    queue<TreeNode*> q;
    int height=heightOfTree(root);
    set<int> visited;
    for (int i=1;i<height+1;i++){
        printLeftViewGivenLevel(root,i,&visited,i);
    }
}

void bottomView(TreeNode* root){
    if(root->right== nullptr || root->left== nullptr){
        cout<<root->val<<" ";
    }
    if(root->left!= nullptr)bottomView(root->left);
    if(root->right!= nullptr)bottomView(root->right);
}

void mirrorTree(TreeNode* root,TreeNode** tmp){
    if(root== nullptr) {
        tmp== nullptr;
        return;
    };
    (*tmp)=new TreeNode(root->val);
    if(root->left!= nullptr)
        mirrorTree(root->left,&((*tmp)->right));
    if(root->right!= nullptr)
        mirrorTree(root->right,&((*tmp)->left));
}

void mirrorTreeInplace(TreeNode* root){
    if(root->left== nullptr && root->right== nullptr) {
        return;
    };
   TreeNode* tmp=root->left;
   root->left=root->right;
   root->right=tmp;
   if(root->right!= nullptr)mirrorTreeInplace(root->right);
   if(root->left!= nullptr)mirrorTreeInplace(root->left);
}

bool isInPath(vector<TreeNode*> &path,TreeNode *root,ll node) {
    if(root== nullptr){
        return false;
    }
    path.push_back(root);
    if(root->val==node){
        return true;
    }
    if((root->left!= nullptr && isInPath(path,root->left,node)  || (root->right!= nullptr && isInPath(path,root->right,node))))
        return true;
    path.pop_back();
    return false;
};

vector<TreeNode*> getPath(TreeNode* root,ll node){
    vector<TreeNode*> path;
    isInPath(path,root,node);
    return path;
}


int main (){
//                    8
//            3                 10
//        1       6                   14
//               4  7               13
//                                     19

    TreeNode* root=new TreeNode(8,new TreeNode(3,new TreeNode(1),
                                               new TreeNode(6,new TreeNode(4),new TreeNode(7))),new TreeNode(10,
                                                                                                             nullptr,new TreeNode(14,new TreeNode(13,
                                                                                                                                                  nullptr,new TreeNode(19)),

                                                                                                                                  nullptr)));

//    cout<<"height - "<<heightOfTree(root)<<endl;
//    int dia=INT_MIN;
//    diameterOfTree(root,&dia);
//    cout<<"diameter - "<<dia<<endl;
    levelOrderTransversalStack(root);
    cout<<endl;
//    levelOrderTransversalQueue(root);
//    cout<<endl;
//    levelOrderTransversalStackSpiral(root);
//    cout<<endl;
//    leftViewStack(root);
//    cout<<endl;
//    leftViewTransversalQueue(root);
//    cout<<endl;
//    bottomView(root);
//    TreeNode* mirror_root=new TreeNode(0);
//    mirrorTree(root,&mirror_root);
//    levelOrderTransversalQueue(root);
//    cout<<endl;
//    mirrorTreeInplace(root);
//    levelOrderTransversalQueue(root);

}