#include <iostream>
#include "Tree.h"
#include "Tests.h"


int main() {

	//Main tests
	runTests();


	//Some small tests
	Tree newTree = Tree(7);
	newTree.insert(newTree.root, 4);
	newTree.insert(newTree.root, 9);
	newTree.insert(newTree.root, 3);
	newTree.insert(newTree.root, 49);
	newTree.insert(newTree.root, 599);
	newTree.deleteNode(newTree.root, 4);
	newTree.insert(newTree.root, 41);

	std::cout << newTree.postorder(newTree.root) << std::endl;
	std::cout << newTree.preorder(newTree.root) << std::endl;
	std::cout << newTree.inorder(newTree.root) << std::endl;


	std::cout << newTree.height(newTree.root);


}


