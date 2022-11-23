#include <iostream>

using namespace std;
class node {
public:
	int data;
	node* left, * right;
};

int heightcalc(node* node)
{
	if (node == NULL)
		return 0;
	else {
		
		int lheight = heightcalc(node->left);
		int rheight = heightcalc(node->right);

		if (lheight > rheight) {
			return (lheight + 1);
		}
		else {
			return (rheight + 1);
		}
	}
}
node* create_Node(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}



void print_Level(node* root, int level)
{
	if (root == NULL)
		return;
	if (level == 1)
		cout << root->data << " ";
	else if (level > 1) {
		print_Level(root->left, level - 1);
		print_Level(root->right, level - 1);
	}
}

void printLevelOrderHelper(node* root)
{
	int j = heightcalc(root);
	int i;
	for (i = 1; i <= j; i++)
		print_Level(root, i);
}
int main()
{
	node* root = create_Node(1);
	root->left = create_Node(2);
	root->right = create_Node(3);
	root->left->left = create_Node(4); //example values
	root->left->right = create_Node(5);

	cout << "Level Order traversal of the binary tree is \n";
	printLevelOrderHelper(root);

	return 0;  
}
