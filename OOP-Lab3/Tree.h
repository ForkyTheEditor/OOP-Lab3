#pragma once
#include "Node.h"

class Tree {

public:

	Tree();
	Tree(int rootValue);
	Node* root;

	Node* insert(Node* root, int value);

};