#include"bits/stdc++.h"
#include"stdio.h"
using namespace std;

struct Node
{
	int data;
	Node *npx;
};

Node* XOR(Node *a, Node *b)
{
	return (Node *)((uintptr_t)(a) ^ (uintptr_t)(b));
}

void insert(Node **head_ref, int data)
{
	Node *temp = new Node();
	temp->data = data;
	temp->npx = XOR(*head_ref,NULL);

	if(*head_ref != NULL)
	{
		Node *next = XOR((*head_ref)->npx, NULL);
		(*head_ref)->npx = XOR(temp,next);
	}

	*head_ref = temp;
}

void printList(Node *head)
{
	Node *curr = head;
	Node *prev = NULL;
	Node *next;

	while(curr != NULL)
	{
		cout<<curr->data;
		next = XOR(prev,curr->npx);

		prev = curr;
		curr = next;
	}
}

int main(int argc, char const *argv[])
{
	Node *head = NULL;
	insert(&head,10);
	insert(&head,20);
	insert(&head,30);
	insert(&head,40);

	printList(head);

	return 0;
}