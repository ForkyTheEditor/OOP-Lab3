#pragma once
#include "Node.h"

class Tree {

public:

	Tree();
	Tree(int rootValue);
	Node* root;

	//Inserts a new node into the tree
	//Returns a pointer to the inserted node
	//Takes in 2 parameters: The root of the tree and the value of the to-be-inserted node
	Node* insert(Node* root, int value);


	//Deletes a node in the tree
	//In case the node has no children then it will just be deleted
	//In case the node has one child then it will copy the child to the to-be-deleted node's parent
	//In case the node has two children then
	//Takes in 2 parameters: The root of the tree and the value to be deleted from the tree
	Node* deleteNode(Node* root, int value);

};