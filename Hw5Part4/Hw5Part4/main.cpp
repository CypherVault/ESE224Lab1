#include <iostream>


struct Node {
	int i;
	int size;
	int data;
	int rdepth;
	int ldepth;
	struct Node* left;
	struct Node* right;
};

struct Node* root = NULL;

//global scale BST as i couldnt figure out how to act upon the root directives in a priv scale

class BST {
private: 

public:



	void inserting(int a[], int size) {

		for (int i = 0; i < size; i++) {
			root = insert(root, a[i]);
		}
		std::cout << "success in writing to the bst...\n\n\n";

	}

	bool perfectBSTcheck(int depth)
	{
		depth = depth + 1;

		while (depth % 2 == 0)
			depth = depth / 2;

		if (depth == 1)
			return true;
		else
			return false;
	}

	struct Node* create_Node(int data)
	{
		struct Node* temp =
			(struct Node*)malloc(
				sizeof(struct Node)
			);
		temp->data = data;
		temp->right = NULL;
		temp->left = NULL;
		temp->rdepth = 0;
		temp->ldepth = 0;

		return temp;
	}

	struct Node* insert(struct Node* root, int data)
	{

		if (root == NULL) {
			struct Node* n = create_Node(data);
			return n;
		}

		if (root->rdepth == root->ldepth) {
			root->left = insert(root->left, data);
			root->ldepth += 1;
		}

		else if (root->rdepth < root->ldepth) {

			if (perfectBSTcheck(root->ldepth)) {
				root->right = insert(root->right, data);
				root->rdepth += 1;
			}

			else {
				root->left = insert(root->left, data);
				root->ldepth += 1;
			}
		}
		return root;
	}

	void inOrder(struct Node* root)
	{
		if (root != NULL) {
			inOrder(root->left);
			std::cout << root->data << " ";
			inOrder(root->right);
		}
	}

	void postOrder(struct Node* node)
	{
		if (node == NULL)
			return;

		postOrder(node->left);

	
		postOrder(node->right);

		std::cout << node->data << " ";
	}


	void preOrder(struct Node* node)
	{
		if (node == NULL)
			return;

		
		std::cout << node->data << " ";

		
		preOrder(node->left);

		
		preOrder(node->right);
	}



};

int main() {

	BST tree;
	int entries[] = { 0, 1, 2, 3, 4, 5, 6 };
	int size = sizeof(entries) / sizeof(int);
	std::cout << "Example Numbers Entered: ";
	for (int i = 0; i <= size - 1; i++) {
		std::cout << entries[i] << " ";
	};

	std::cout << "\n";

	tree.inserting(entries, size); //input each at a time using entries array
	std::cout << "IN ORDER: \n";
	tree.inOrder(root);
	std::cout << "\n";
	std::cout << "PRE ORDER: \n";
	tree.preOrder(root);
	std::cout << "\n";
	std::cout << "POST ORDER: \n";
	tree.postOrder(root);
	std::cout << "\n";

};

