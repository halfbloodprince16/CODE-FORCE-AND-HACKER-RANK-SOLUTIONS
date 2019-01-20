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
	node *next;
};
struct node *head=NULL;

void Insert()
{
	int pos,data;
	node *curr = head;

	cout<<"Enter Data:";cin>>data;

	node *temp=new node;
	temp->data = data;

	while(curr->next != head)
	{
		curr = curr->next;
	}

	temp->next = temp;
	
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		curr->next = temp;
		head = temp;
	}
}

void Display()
{
	node *curr = head;
	if(head == NULL)
	{
		return;
	}
	
	do
	{
		cout<<curr->data<<"->";
		curr = curr->next;
	}
	while(curr!=head);

	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int ch;

	do
	{
		cout<<"1:Insert\n2:Delete\n3:Display";
		cin>>ch;

		switch(ch)
		{
			case 1:Insert();
				break;
			case 2:
				break;
			case 3:Display();
				break;

		}
	}
	while(ch!=4);
	return 0;
}