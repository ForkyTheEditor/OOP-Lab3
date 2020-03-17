#pragma once
#include "Node.h"

class Tree {

public:

	Tree();
	Tree(int rootValue);
	Node* root;

	void insert(int value);

};