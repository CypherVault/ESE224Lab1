
#include <iostream>
#include <cassert>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

Node* mergeSortedLists(Node* a, Node* b)
{
	
	Node placeholder;
	
	Node* tail = &placeholder;

	
	placeholder.next = NULL;
	while (1) {
		if (a == NULL) {
			
			tail->next = b;
			break;
		}
		else if (b == NULL) {
			tail->next = a;
			break;
		}
		if (a->data <= b->data)
			MoveNode(&(tail->next), &a);
		else
			MoveNode(&(tail->next), &b);

		tail = tail->next;
	}
	return (placeholder.next);
}

void MoveNode(Node** finalref, Node** beginref)
{
	
	Node* newNode = *beginref;
	assert(newNode != NULL);

	
	*beginref = newNode->next;

	
	newNode->next = *finalref;

	
	*finalref = newNode;
}

void insert(Node** head_ref, int new_data)
{
	
	Node* new_node = new Node();

	
	new_node->data = new_data;

	
	new_node->next = (*head_ref);

	
	(*head_ref) = new_node;
}

void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}


int main()
{
	Node* res = NULL;	
	Node * res2 = NULL;
	Node* a = NULL;
	Node* b = NULL;


	// lists, a: 25,12,8, b: 400,18,3  c: 231, 12, 1, 0 */
	insert(&a, 25);
	insert(&a, 12);
	insert(&a, 8);

	insert(&b, 400);
	insert(&b, 18);
	insert(&b, 3);
	

	cout << "Linked List A is: \n";

	printList(a);

	cout << "\n";

	cout << "Linked List B is: \n";

	printList(b);

	cout << "\n";


	cout << "Completely Merged Sorted Linked List is: \n";

	res = mergeSortedLists(a, b);

	printList(res);

	return 0;
}
