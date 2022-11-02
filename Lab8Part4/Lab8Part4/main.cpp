#
#include <iostream>
#include <cassert>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

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

void print(Node* node)
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
	
	
	Node* c = NULL;


	// lists, a: 25,12,8, b: 400, 18,3  , c: 231, 12, 1, 0 */
	

	insert(&c, 231);
	insert(&c, 0);
	insert(&c, 12);
	insert(&c, 0);
	insert(&c, 3);
	insert(&c, 0);


	cout << "Complete Linked List is: \n";
	print(c);


	cout << "\nDuplicates removed: \n";
	removeDuplicates(c);
	print(c);

	return 0;
}
