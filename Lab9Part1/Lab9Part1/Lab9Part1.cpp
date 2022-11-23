#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct linkl {
	Node* head;
	linkl() { head = NULL; }

	void push(int data)
	{
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}
	void reverse()
	{
		Node* curr = head; //for start of linked list you have to make them poinbt appropriately 
		Node* prev = NULL, * next = NULL;

		while (curr != NULL) {
		
			next = curr->next;
			curr->next = prev;
			
			prev = curr;
			curr = next;
		}
		head = prev;
	}

	
	void print1( int a , int b)
	{
		int curr = 0;

		struct Node* temp = head;
		cout << "0 ";

		while (temp != NULL) {
			curr = (temp->data);
			if ( a <= curr && curr <= b) {
				cout << temp->data << " ";
				temp = temp->next;
				curr++;
			}
			else {
				temp = temp->next;
				curr++;
			}
			
		}
	}

	void printproper()
	{
		struct Node* temp = head;
		while (temp != NULL) {
			if ((temp->data) > 5) {
				cout << temp->data << " ";
				temp = temp->next;
			}
			else {
				temp = temp->next;
			};
		}
	}

	void print2()
	{
		struct Node* temp = head;
		while (temp != NULL) {
				cout << temp->data << " ";
				temp = temp->next;
		}
	}

};

int main()
{
	int a;
	int b; 
	linkl ll;
	
ll.push(9);
ll.push(8);
ll.push(7);
ll.push(6);
ll.push(5);
ll.push(4);
ll.push(3);
ll.push(2);
ll.push(1);
ll.push(0);
cout << "Original list\n";
ll.print2();
cout << "\nLeft barrier\n";
cin >> a;
cout << "\nRight barrier\n";
cin >> b;

	cout << "proper printed linked list\n";
	ll.reverse();
	ll.print1(a,b);
	

	ll.reverse();
	ll.reverse();
	ll.reverse();
	ll.printproper();


	//output: 0,5,4,3,2,1,6,7,8,9
	return 0;
}
