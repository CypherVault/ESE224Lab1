
#include <iostream>
using namespace std;

struct Node {
int data;
int rdepth;
int ldepth;
struct Node* left;
struct Node* right;
};

bool perfectBSTcheck(int depth)
{
depth = depth + 1;

while (depth % 2 == 0) {
	depth = depth / 2;
}

if (depth == 1) {
	return true;
}

else {
	return false;
}

}

struct Node* create_Node(int data)
{
struct Node* temp =	(struct Node*)malloc(sizeof(struct Node));
temp->data = data;
temp->right = NULL;
temp->left = NULL;
temp->rdepth = 0;
temp->ldepth = 0;
return temp;
}

void inorder(struct Node* root)
{
if (root != NULL) {
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
}
struct Node* insertion(struct Node* root, int data){
if (root == NULL) {
	struct Node* temp = create_Node(data);
	return temp;
}

if (root->rdepth == root->ldepth) {
	root->left = insertion(root->left, data);
	root->ldepth += 1;
}

	
else if (root->rdepth < root->ldepth) {

	if (perfectBSTcheck(root->ldepth)) {
		root->right = insertion(root->right, data);
		root->rdepth += 1;
	}

	else {
		root->left = insertion(root->left, data);
		root->ldepth += 1;
	}
}
return root;
}


int main(){   
struct Node* root = NULL;
int entries[] = { 0, 1, 2, 3, 4, 5, 6 };
int size = sizeof(entries) / sizeof(int);
cout << "Example Numbers Entered (from hw desc): ";
for (int i = 0; i <= size-1; i++) {
	cout << entries[i] << " ";
}
cout << "\n";

	
for (int i = 0; i < size; i++) //input each at a time using entries array
	root = insertion(root, entries[i]);


cout << "Inorder Transversal Print: ";
inorder(root);

return 0;
}
