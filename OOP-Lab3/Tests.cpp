#include "Tests.h"
#include "Tree.h"
#include <cassert>

void runTests() {

	Tree tree1 = Tree(3);
	tree1.insert(tree1.root, 4);
	tree1.insert(tree1.root, 5);
	tree1.insert(tree1.root, 1);

	assert(tree1.height(tree1.root) == 3);
	assert(tree1.countNodes(tree1.root) == 4);
	assert(tree1.countEdges(tree1.root) == 3);

}