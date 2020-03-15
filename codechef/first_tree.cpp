#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Node{
public:
    ll data;
    Node * left;
    Node * right;
    Node(ll d){
        data =d;
        left=nullptr;
        right=nullptr;
    }
};

class Tree{
public:
    Node* insert(Node* root,ll data){
        if(root==nullptr){
            return new Node(data);
        }
        else{
            Node* cur;
            if(data<=root->data){
                cur=insert(root->left,data);
                root->left=cur;
            }
            else{
                cur = insert(root->right, data);
                root->right = cur;
            }
            return root;
        }
    }

    void preOrder(Node* root){
        if(root==nullptr){
            return ;
        }
        cout<<root->data;
        preOrder(root->left);
        preOrder(root->right);
    }

    void levelOrder(Node * root) {
        queue<Node*> q;
        if(root!=nullptr){
            q.push(root);
        }
        while(!q.empty()){
            cout<<q.front()->data<<' ';
            if(q.front()->left!= nullptr)
            q.push(q.front()->left);
            if(q.front()->right!= nullptr)
            q.push(q.front()->left);
            q.pop();
        }
    }

    Node *lca(Node *root, int v1,int v2) {
        // Write your code here.
        int min=v1>v2?v2:v1;
        int max =v2==min?v1:v2;
        if(root->data==v1||root->data==v2){
            return root;
        }
        if (min < root->data && max > root->data) {
            return root;
        } else if (min < root->data && max < root->data) {
            return lca(root->left, v1, v2);
        } else if (min > root->data && max > root->data) {
            return lca(root->right, v1, v2);
        }
        return root;
    }
};

int main(){
    Tree myTree;
    Node* root = nullptr;
    ll t;
    ll data;
    cin >> t;
    while(t--) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    int v1,v2;
    cin>>v1;
    cin>>v2;
//    myTree.levelOrder(root);
    cout<<myTree.lca(root,v1,v2)->data;
    return 0;

}
