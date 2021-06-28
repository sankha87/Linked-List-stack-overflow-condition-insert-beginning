//Add a node at the front:
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node
{
	int data;
	struct Node *next;
};

struct Node* push(struct Node *head_ref, int new_data)
{
	struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
	if (new_node == NULL)
		printf("\nStack Overflow");
	else
	{
		new_node->data = new_data;
		new_node->next = head_ref;
		head_ref = new_node;
	}
	return head_ref;
}

void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf(" %d ", node->data);
		node = node->next;
	}
}

int main()
{
	struct Node *head = NULL, *head2 = NULL;
	head = push(head, 7);
	head = push(head, 5);
	head2 = push(head, 3);

#if 0				// for commenting a section of code, use ( #if 0 ... #endif )
	while(1)		//	 - for checking Stack overflow condition
	head2 = push(head2, 1);				
#endif

#if 1				// for uncommenting a section of code, use ( #if 1 ... #endif )
	head2 = push(head2, 1);
#endif

	printf("\n Created Linked list are, (a) : \n");
	printList(head);
	printf("\n\n and, (b) : \n\n");
	printList(head2);
	_getch();
}