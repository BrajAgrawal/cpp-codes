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






vector<int> inOrderTraversal(Node * root)
{   
    Node* curr = root;
    vector<int> ans;

      while(curr != NULL)
      {
        if(curr->left == NULL)
        {
          ans.push_back(curr->data);
          curr = curr->right;
        }
        else
        {
           Node* temp = curr->left;
           while(temp->right && temp->right != curr ) temp = temp->right;

           if(temp->right == NULL)               // Forming a thread
           {
            temp->right = curr;
            curr = curr->left;
           }
           else if(temp->right == curr)          // Thread was already formed 
           {
             temp->right = NULL;
             ans.push_back(curr->data);
             curr = curr->right;
           }
        }
      }
      return ans;
}





vector<int> preOrderTraversal(Node * root)
{
    vector<int> ans;
    Node* curr = root;

    while(curr != NULL)
    {
        if(curr->left == NULL)
        {
            ans.push_back(curr->data);
            curr = curr->right;
        }
        else
        {
            Node* temp = curr->left;
            while(temp->right && temp->right != curr) temp = temp->right;
            if(temp->right == NULL)
            {
                temp->right = curr;
                ans.push_back(curr->data);
                curr = curr->left;
            }
            else
            {
                temp->right = NULL;
                curr = curr->right;
            }
        }
    }
    return ans;
}

vector<int> postOrderTraversal(Node * root)
{
    vector<int> ans;
    vector<int> ans2;
    Node* curr= root;
     
    while (curr != NULL)
    {
        if(curr->right == NULL)
        {
            ans.push_back(curr->data);
            curr = curr->left;
        }
        else
        {
            Node * temp = curr->right;
            while(temp->left && temp->left != curr) temp = temp->left;
            if(temp->left == NULL) 
            {
             temp->left = curr;
             ans.push_back(curr->data);
             curr = curr->right;
            }
            else 
            {
                temp->left = NULL;
                curr = curr->left;
            }

        }
    }
    while (!ans.empty())
    {
        ans2.push_back(ans.back());
        ans.pop_back();
    }
    return ans2;
    
}

void print_vector(vector<int> v)
{
    for(int i:v) cout<<i<<" ";
}

int main()
{  
   int root_data;
   cout<<"Enter Root data :";
   cin>>root_data;
   Node * root = new Node(root_data);
   buildBinaryTree(root);

   cout<<"Inorder Traversal :"<<endl;
   print_vector(inOrderTraversal(root));
   cout<<endl<<endl;

   cout<<"Preorder Traversal :"<<endl;
   print_vector(preOrderTraversal(root));
   cout<<endl<<endl;

   cout<<"Postorder Traversal :"<<endl;
   print_vector(postOrderTraversal(root));
   cout<<endl<<endl;

//1 2 4 -1 -1 5 -1 6 -1 -1 3 -1 -1   

return 0;
}