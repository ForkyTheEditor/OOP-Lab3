#include "Tree.h"

Tree::Tree() {

	root = new Node();

}

Tree::Tree(int rootValue) {

	root = new Node(rootValue);
}


Node* Tree::insert(Node* root ,int value)
{

	

	if (root == nullptr) {

		return new Node(value);

	}

	if (value == root->data) {

		return root;

	}

	if (value > root->data) {

		root->rightNode = insert(root->rightNode, value);

	}

	if (value < root->data) {

		root->leftNode = insert(root->leftNode, value);
	}

}

Node* Tree::deleteNode(Node* root, int value) {





}