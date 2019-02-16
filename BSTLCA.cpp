#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }


std::map<Node *,int>m;
Node *ans;
Node *search(Node *root,int data,int turn)
{
    if(turn == 0)
        m[root]++;
    else
    {
        if(m[root]>0)
        {
            ans = root;
        }
    }
    if(root->data == data)
    {
        //cout<<root->data<<" ";
    }
    else if(root->data > data)
    {
        root->left = search(root->left,data,turn);
    }
    else
    {
        root->right = search(root->right,data,turn);
    }
    return root;
}

Node *lca(Node *root, int v1,int v2) 
{
    std::map<int,int>m;
    std::vector<int>v;
    search(root,v1,0);
    search(root,v2,1);
    return ans;
}

}; 

int main() 
{
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  	
  	int v1, v2;
  	std::cin >> v1 >> v2;
  
    Node *ans = myTree.lca(root, v1, v2);
    
  	std::cout << ans->data;

    return 0;
}
