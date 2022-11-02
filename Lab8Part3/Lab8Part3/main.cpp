
#include <iostream>
#include <cassert>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void MoveNode(Node** destRef, Node** sourceRef)
{
	
	Node* newNode = *sourceRef;

	assert(newNode != NULL);

	
	*sourceRef = newNode->next;

	
	newNode->next = *destRef;

	*destRef = newNode;
}

Node* SortedMerge(Node* a, Node* b)
{
	Node dummy;

	Node* tail = &dummy;

	dummy.next = NULL;
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
	return (dummy.next);
}

void push(Node** head_ref, int new_data)
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


void removeDuplicates(Node* start)
{
	Node* ptr1, * ptr2, * dup;
	ptr1 = start;

	while (ptr1 != NULL && ptr1->next != NULL)
	{
		ptr2 = ptr1;

		while (ptr2->next != NULL)
		{

			if (ptr1->data == ptr2->next->data)
			{

				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete(dup);
			}
			else
				ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
}


int main()
{
	Node* res = NULL;	Node* res2 = NULL;
	Node* a = NULL;
	Node* b = NULL;
	Node* c = NULL;


	//Created lists, a: 25,12,8, b: 400, 18,3  , c: 231, 12, 1, 0 */
	push(&a, 25);
	push(&a, 12);
	push(&a, 8);

	push(&b, 400);
	push(&b, 18);
	push(&b, 3);

	push(&c, 231);
	push(&c, 12);
	push(&c, 3);
	push(&c, 0);

	cout << "List A:";
	printList(a);
	cout << "\n";
	cout << "List B:";
	printList(b);
	cout << "\n";
	cout << "List C:";
	printList(c);
	cout << "\n";

	res = SortedMerge(a, b);
	res2 = SortedMerge(res, c);


	cout << "Completely Merged Linked List is: \n";
	printList(res2);



	return 0;
}
