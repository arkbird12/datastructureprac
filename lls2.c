/*
 * Rishi Thakkar (c) 2017 
 * email: rishi.r.thakkar@gmail.com
 * lls.c
 * This program will demo a singly linked list
 * You will be able to decide size of the linked list, list data of linked list, list amount of nodes in linked list, add node(s), and remove node(s).
 * lls.c (current) -> stack.c  -> tree.c -> hash.c -> graph.c -> PROGRAM 
 * REFERENCE: https://www.cs.cmu.edu/~guna/15-123S11/Lectures/Lecture09.pdf
 * TODO: createNode() get input + data, deleteNode(), deleteList(), and addNode(). OPTIMIZE ONCE DONE 
 */

#include <stdio.h>
#include <stdlib.h>
// #include <time.h> RANDOM OPTIONAL

struct node 
{
	int data;
	struct node *next;
};

struct node *head;
/*
void search(struct node *n1) 
{
	int a; 
	printf("enter a number to search: ");
	scanf("%i", &a);
	
	struct node *current = n1;

	while(current != NULL) {   // Potentially split search() into walk() and find()
		if(current->data = a) { 
			printf("yes %i is in list\n", a);
			break;
		}
		else {
			printf("no\n");
			break;
		}
		current = current->next;
	}
}

This is obsolete if user is entering data. Repurpose sections for other functions
*/

void displayList(struct node *n1) {
    while (n1 != NULL) {
        printf("%d   ", n1->data);
        n1 = n1->next;
    }
    printf("\n");
}

		
void createNode(int data) {
	struct node *n;
 	n = (struct node *)malloc(sizeof(n));
	n->data = data;
	n->next = n;
};
/*
void deleteNode(struct node *n1, int r_data) {
	displayList(n1);

	struct node *current = n1;

	while(current->data != r_data) 
		current = &(*current)->next; // REVISE
	*current = n1->next;
	*/

void deleteNode(struct node *target) {
	struct node *indirect = head;

	while(indirect != target) {
		indirect = indirect->next;
		if (indirect == target) {
			break;
			indirect = target->next;
		}
	}
}

int main() 
{
	int i;
	int data;
	int amt;

	printf("How many nodes\n ");
	scanf("%i", &amt);
	
	for(i = 1; i <= amt; i++) {
		scanf("%d", &data);
		createNode(data);
	}
}
	/*
	  1.) Get amount of nodes from user stored in int amt. 
	  2.) Generate amount of nodes using createNode() 
	  3.) 
	 */
		  
	
		  
	// search(n1);
	/* remove all the garbage below and move to createNode() with more efficient node creation
	  struct node *n1, *n2, *n3, *current;

	  n1 = (struct node *)malloc(sizeof(struct node));
	  n2 = (struct node *)malloc(sizeof(struct node));		//TODO : Allow users to decide how many and data of nodes or randomize and have user guess
	  n3 = (struct node *)malloc(sizeof(struct node));
	  current = (struct node *)malloc(sizeof(struct node));

	  n1->data = 1;
	  n1->next = n2;
	
	  n2->data = 2;
	  n2->next = n3;
	
	  n3->data = 3;
	  n3->next = NULL;
	*/

