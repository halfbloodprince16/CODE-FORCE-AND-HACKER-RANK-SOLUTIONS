#include"bits/stdc++.h"
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node *prev;
};

Node *insert(Node **head, int data)
{
	Node *temp = new Node();
	temp->data = data;
	temp->next = (*head);
	temp->prev = NULL;

	if((*head) != NULL)
	{
		(*head)->prev = temp;
	}
	(*head) = temp;
}

void printList(Node* p)
{
	Node* last;
	while(p != NULL)
	{
		cout<<p->data<<" ";
		last = p;
		p = p->next;
	}
	
	cout<<endl;

	while(last != NULL)
	{
		cout<<last->data<<" ";
		last = last->prev;
	}

}

int main(int argc, char const *argv[])
{
	Node *head = NULL;
	insert(&head,1);
	insert(&head,2);
	insert(&head,3);
	insert(&head,4);
	insert(&head,5);

	printList(head);
	return 0;
}