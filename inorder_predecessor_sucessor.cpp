#include <iostream>
#include <queue>
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

void inOrderPredecessor_sucessor(Node* root,int key,pair<Node*,Node*> & ans)
{  
    
   if(root == NULL) return ;
   
   if(root->data == key)
   {
    if(root->left)
    {
        Node * temp = root->left;
        while(temp->right) temp = temp->right;
        ans.first = temp;
    }
    if(root->right)
    {
        Node * temp = root->right;
        while(temp->left) temp = temp->left;
        ans.second = temp;
    }
   }

   else if(key > root->data )
   { 
     ans.first = root;
     inOrderPredecessor_sucessor(root->right,key,ans);
   }

   else
   { 
     ans.second = root;
     inOrderPredecessor_sucessor(root->left,key,ans);
   }

   
}


int main()
{
    Node* root = NULL;
    cout<<"Enter Data to create BST :"<<endl;
    insertvalues(root);
    cout<<endl<<"Printing  BST :"<<endl;
    levelOrderTraversal(root);
    
    pair<Node*,Node*>pre_suc ;
    inOrderPredecessor_sucessor( root,65,pre_suc);
    int a=-1,b=-1;
    if(pre_suc.first) a = pre_suc.first->data;
    if(pre_suc.second) b = pre_suc.second->data;
    cout<<"Predecessor = "<<a<<"  Sucessor = "<<b<<endl;

    return 0;
}