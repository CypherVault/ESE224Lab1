#include<iostream>
using namespace std;
#define MAX = INT_MAX;
struct Node
{
	int data;
	struct Node* left, * right;
};

struct Node* create_node(int data)
{
	struct Node* node = new (struct Node);
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

void absdiffferencesearcherhelper(struct Node* node, int k, int& last_result, int& closest_found)
{
	if (node == NULL)
		return;

	if (node->data == k){
		closest_found = k;
		return;
	}

	if (last_result > abs(node->data - k)){
		last_result = abs(node->data - k);
		closest_found = node->data;
	}

	if (k < node->data) {
		absdiffferencesearcherhelper(node->left, k, last_result, closest_found);
	}
	else {
		absdiffferencesearcherhelper(node->right, k, last_result, closest_found);
	}
}



int search(Node* root, int k)
{
	int last_result = INT_MAX;
	int closest_found = -1;

	absdiffferencesearcherhelper(root, k, last_result, closest_found);

	return closest_found;
}


void inOrder(struct Node* node)
{
	if (node == NULL)
		return;

	inOrder(node->left);

	cout << node->data << " ";

	inOrder(node->right);
}

int main()
{
	int k;
	struct Node* root = create_node(4);
	root->left = create_node(2);root->left->left = create_node(1);root->left->right = create_node(3);
	root->right = create_node(7);
	
	

	cout << "Enter the target youd like to find in predefined tree: \n";
		cin >> k;

	cout << "\nInorder traversal of binary tree is \n";
	inOrder(root);

	cout << "\n";

	if ((search(root, k)) == k) {
		cout << "Target " << k << " found."; // this will only print when the closest  returned value is EXACTLY the key
	}
	
	return 0;
}
