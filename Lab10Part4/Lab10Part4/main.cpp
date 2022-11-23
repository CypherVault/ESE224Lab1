#include <iostream>
using namespace std;
int counter = 1;
int used3 = 0;

class node {
public:
	int data;
	node* left;
	node* right;
};
//neccessary for creating and init
node* create_Node(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}
void postOrder(struct node* node)
{
	if (node == NULL)
		return;

	
	postOrder(node->left);

	
	postOrder(node->right);
	counter++;
	if ((counter > 1) && (counter < 3)) {
		cout << "\n";
	}
	if ((counter > 3) && (counter < 7)) {
		if (used3 == 0) {
			cout << "\n"; 
			used3 = 1;
		}
		if ((node->data) == 1) {
			cout << "\n";
		}
	}
	if ((counter > 7) && (counter < 15)) {
		cout << "\n";
	}if ((counter > 15) && (counter < 31)) {
		cout << "\n";
	}
	
	cout << node->data << " ";
}

int findMaxHeight(node* node)
{
	if (node == NULL)
		return 0;
	else {
		
		int treeLheight = findMaxHeight(node->left);
		int treeRheight = findMaxHeight(node->right);

		
		if (treeLheight > treeRheight) {
			return (treeLheight + 1);
		}
		else {
			return (treeRheight + 1);
		}

	}
}




int main()
{
	node* root = create_Node(1);

	root->left = create_Node(2);root->left->left = create_Node(4);root->left->right = create_Node(5);
	root->right = create_Node(3);
	
	cout << "\nUpside down Post order traversal (with height levels) of binary tree:";
	postOrder(root);




	cout << "\nHeight of tree is " << findMaxHeight(root);
	return 0;
}

