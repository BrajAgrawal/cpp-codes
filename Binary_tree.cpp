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

void buildBinaryTree(Node* root)
{   
    int val;


    cout<<"Enter value to be entered in left of  "<<root->data<<endl;
    cin>>val;
    if(val != -1)
    root->left = new Node(val);

    if( root->left ) buildBinaryTree( root ->left);

    

    cout<<"Enter value to be entered in right of  "<<root->data<<endl;
    cin>>val;
    if(val != -1)
    root->right = new Node(val);

    if( root->right ) buildBinaryTree( root ->right);
    
}

void buildFromLevelOrderTraversal(Node* &root)
{
   queue<Node*> q;
   q.push(root);

   while (!q.empty())
   { 
     int val;
     Node* temp = q.front();
     q.pop();
     cout<<"Enter value on left of "<< temp->data<<endl;
     cin>>val;
     if(val != -1)
     {
        temp ->left = new Node(val);
        q.push(temp->left);
     }

     cout<<"Enter value on right of "<< temp->data<<endl;
     cin>>val;
     if(val != -1)
     {
        temp ->right = new Node(val);
        q.push(temp->right);
     }
   }
   
}

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

void ReverseOrderTraversal(Node* root)
{
     queue<Node*> q;
     stack<Node*> s;
    q.push(root);
    q.push(NULL);
    

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

         if(temp == NULL)
        {
            s.push(temp);
            if(!q.empty()) q.push(NULL);
        }
        else
        {
          s.push(temp);
          if(temp->left) q.push (temp->left);
          if(temp->right) q.push (temp->right);
        }

    }
    while(!s.empty())
    {  
        if(s.top())   cout<<s.top()->data<<"  ";
        else          cout<<endl;

        s.pop();
    }
}

void inOrderTraversal(Node * root)
{
    if(root == NULL)
    return;

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}





void preOrderTraversal(Node * root)
{
    if(root == NULL)
    return;
    
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node * root)
{
    if(root == NULL)
    return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main()
{  
   int root_data;
   cout<<"Enter Root data :";
   cin>>root_data;
   Node * root = new Node(root_data);
   buildBinaryTree(root);
   // buildFromLevelOrderTraversal(root);

   cout<<"Level Order Traversal :"<<endl;
   levelOrderTraversal(root);
   cout<<endl;
   
   cout<<"Reverse Level Order Traversal :"<<endl;
   ReverseOrderTraversal(root);
   cout<<endl<<endl;

   cout<<"Inorder Traversal :"<<endl;
   inOrderTraversal(root);
   cout<<endl<<endl;

   cout<<"preorder Traversal :"<<endl;
   preOrderTraversal(root);
   cout<<endl<<endl;

   cout<<"postorder Traversal :"<<endl;
   postOrderTraversal(root);
   cout<<endl<<endl;

   //1 3 7 -1 -1 11 -1 -1 5 0 -1 -1 -1

return 0;
}