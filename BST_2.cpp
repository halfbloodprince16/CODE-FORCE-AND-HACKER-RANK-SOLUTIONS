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

struct Node
{
	int data;
	Node *l,*r;
};
struct Node *root = NULL;

Node *insert(Node* root,int data)
{
	if(root == NULL)
	{
		Node *temp = new Node();
		temp->data = data;
		temp->l = NULL;
		temp->r = NULL;

		root = temp;
	}
	else if(root->data > data)
	{
		root->l = insert(root->l,data);
	}
	else
	{
		root->r = insert(root->r,data);
	}

	return root;
}

void *display(Node* ptr,int level)
{
	int i;
    if (ptr != NULL)
    {
        display(ptr->r, level+1);
        cout<<endl;
        if (ptr == root)
            cout<<"Root->:  ";
        else
        {
            for (i = 0;i < level; i++)
                cout<<"       ";
        }
        cout<<ptr->data;
        display(ptr->l, level+1);
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