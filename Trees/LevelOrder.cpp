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
void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL); //separator for level 0

    while(!q.empty())
    {
        Node* temp = q.front();
        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty()) //child bache huve hai
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
}
int main()
{

    Node* root = NULL;
    root = buildTree();
    cout<<"Tree built succesfully!"<<endl;
    levelOrderTraversal(root);

    return 0;
}