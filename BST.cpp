#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class Node
{
public:

    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
      this->data = data;
      left = NULL;
      right = NULL;
    }
   
};

void levelOrderTraversal(Node * root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
        else
        {
          cout<<temp->data<<" ";
          if(temp->left) q.push (temp->left);
          if(temp->right) q.push (temp->right);
        }

    }
    
}

Node* buildBST(Node* root, int data)
{
    if(root == NULL) 
    {
        root = new Node(data);
        return root;
    }

    if(data > root->data)
    {
        root->right = buildBST(root->right,data);
    }
    else
    {
        root->left = buildBST(root->left,data);
    }

    return root;

}
void insertvalues(Node* & root)
{
    int data;
    cin>>data;
    while(data!= -1)
    {
        root = buildBST(root,data);
        cin>>data;
    }
}

int minValue(Node* root)
{   
    Node* temp =root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp->data;
}
int maxValue(Node* root)
{   
    Node* temp =root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp->data;
}
int main()
{
    Node* root = NULL;
    cout<<"Enter Data to create BST :"<<endl;
    insertvalues(root);
    cout<<endl<<"Printing  BST :"<<endl;
    levelOrderTraversal(root);
    cout<<"Max and Min values of BST are : "<<minValue(root)<<"  &  "<<maxValue(root)<<" respectively"<<endl;
}