#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
/* Computes the number of nodes in a tree. */
int height(struct Node* node);
void inorder(Node *root)
{
    if (root == NULL)
       return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);    
}
/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d
", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     cout << height(root) << endl;
  }
  return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/* Tree node structure  used in the program
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/


int maxDepth(Node* p)
{
    if(p->left == NULL and p->right == NULL)
    {
        return 0;
    }
    maxDepth(p->left);
    maxDepth(p->right);
}

/* Computes the height of binary tree with given root.  */
int height(Node* node)
{
   Node *p = node;
   /*
   std::queue<int>q;
   q.push(p->data);*/
   int l,r;
   
   if(node == NULL)
   {
       return 0;
   }
   
   l = height(node->left);
   r = height(node->right);
   
   if(l>r)
   {
       return l+1;
   }
   else
   {
       return r+1;
   }
}