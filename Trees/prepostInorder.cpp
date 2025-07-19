#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree()
{
    cout<<"Enter data: "<<endl;
    int data;
    cin>>data;
    if(data == -1)
    {
        return NULL;
    }
    Node* root = new Node(data);
    cout<<"Enter left node data: "<<endl;
    root->left = buildTree();
    cout<<"Enter right node data: "<<endl;
    root->right = buildTree();
    return root;
}
void InOrder(Node* root)
{
    // LNR
    if(root == NULL) return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}
void PreOrder(Node* root)
{
    // NLR
    if(root == NULL) return;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void PostOrder(Node* root)
{
    // LRN
    if(root == NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}
int main()
{

    Node* root = NULL;
    root = buildTree();
    cout<<"Tree built succesfully!"<<endl;
    cout<<"Inorder Traversal: "<<endl;
    InOrder(root);
    cout<<endl<<"PreOrder Traversal: "<<endl;
    PreOrder(root);
    cout<<endl<<"PostOrder Traversal: "<<endl;
    PostOrder(root);

    return 0;
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1