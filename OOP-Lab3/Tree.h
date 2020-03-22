#pragma once
#include "Node.h"
#include <string>

class Tree {

public:

	Tree();
	Tree(int rootValue);
	Node* root;

	/*Inserts a new node into the tree
	Returns a pointer to the inserted node
	The function needs to return a Node pointer in order for the recursivity to work
	Takes in 2 parameters: The root of the tree and the value of the to-be-inserted node*/
	Node* insert(Node* root, int value);


	/*Deletes a node in the tree
	In case the node has no children then it will just be deleted
	In case the node has one child then it will copy the child to the to-be-deleted node's parent
	In case the node has two children then copy the inorder successor of the node to the current node, virtually deleting it from the tree. Delete the old inorder successor.
	The function needs to return a Node pointer in order for the recursivity to work
	Takes in 2 parameters: The root of the tree and the value to be deleted from the tree*/
	Node* deleteNode(Node* root, int value);

	/*Returns a string representing an inorder traversal of the tree*/
	std::string inorder(Node* root); 

	/*Returns a string representing a preorder traversal of the tree*/
	std::string preorder(Node* root);

	/*Returns a string representing a postorder traversal of the tree*/
	std::string postorder(Node* root);

	/*Return the number of nodes in the tree*/
	int countNodes(Node* root);

	/*Returns the number of edges in the tree*/
	int countEdges(Node* root);


	/*Returns the height of the tree*/
	int height(Node* root);

};