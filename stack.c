#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int val;
	struct node* nxt;
}node;

node* push(node** head, int v)
{
	node* ptr=(node*) malloc(sizeof(node));
	ptr->val=v;
	ptr->nxt=*head;
	return ptr;
}

node* pop(node* head)
{
	node* temp=head;
	head=head->nxt;
	free(temp);
	return head;
}


void print(node* n)
{
	while(n->nxt!=NULL){
		printf("%d ",n->val);
		n=n->nxt;
	}
	printf("\n");
	return;
}

int main()
{
	node* top=(node*) malloc(sizeof(node));
	top->nxt=NULL;
	//int act;
	//scanf("%d %d",&act,%v);
	//if(act==1)
	//{
		top=push(&top,1);
		top=push(&top,2);
		top=push(&top,3);
		print(top);
		top=pop(top);
	//}
	//else pop(head);
	print(top);
}
