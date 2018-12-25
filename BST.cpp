#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

struct node
{
	int data;
	node *left;
	node *right;
};
node *root=NULL;

node* getnode(node *root,int data)
{
	node *temp = new node();
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
} 

node* insert(node *root,int data)
{
	if(root == NULL)
	{
		root = getnode(root,data);
	}
	else if(data <= root->data)
	{
		root->left = insert(root->left,data);
	}
	else
	{
		root->right = insert(root->right,data);
	}
	return root;
}

void display(node* ptr,int level)
{
	int i;
    if (ptr != NULL)
    {
        display(ptr->right, level+1);
        cout<<endl;
        if (ptr == root)
            cout<<"Root->:  ";
        else
        {
            for (i = 0;i < level; i++)
                cout<<"       ";
        }
        cout<<ptr->data;
        display(ptr->left, level+1);
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
	
	int ch,d;
	do
	{
		cout<<"1:Insert\n2:Display";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Enter data";
					cin>>d;
					root = insert(root,d);break;
			case 2: display(root,1);break;
		}
	}
	while(ch!=3);
	return 0;
}