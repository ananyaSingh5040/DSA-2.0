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
int main()
{

    Node* root = NULL;
    root = buildTree();
    cout<<"Tree built succesfully!"<<endl;

    return 0;
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1