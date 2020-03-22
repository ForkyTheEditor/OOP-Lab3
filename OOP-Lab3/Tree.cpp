#include "Tree.h"
#include <algorithm>

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

	if (value > root->data) {

		root->rightNode = insert(root->rightNode, value);

	}

	else if (value < root->data) {

		root->leftNode = insert(root->leftNode, value);
	}

	return root;
}


 Node* Tree::deleteNode(Node* root, int value) {

	//The node doesn't exist
	if (root == nullptr) {

		return root;
	}

	//The searched value is bigger than the current node
	if (value > root->data) {

		root->rightNode = deleteNode(root->rightNode, value);

	}
	//The searcheed value is smaller than the current node
	else if (value < root->data) {

		root->leftNode = deleteNode(root->leftNode, value);

	}
	//The searched value has been found
	else {

		//The node has no children: Just delete it
		if (root->leftNode == nullptr && root->rightNode == nullptr) {

			delete root;
			return nullptr;

		}

		//The node has one child: copy the child to its grandparent and delete the node
		if (root-> leftNode != nullptr) {

			//The node has two children: copy the inorder successor 
			if (root->rightNode != nullptr) {

				//Get the inorder successor
				//This happens to be the smallest value in the right subtree of the node
				Node* currentNode = root->rightNode;

				while (currentNode->leftNode != nullptr) {

					currentNode = currentNode->leftNode;


				}

				//currentNode is now the inorder successor of the root to be deleted
				root->data = currentNode->data;

				root->rightNode = deleteNode(root->rightNode, currentNode->data);

				return root;

			}


			//Save the return node so as not to lose it
			Node* tempReturn = root->leftNode;
			delete root;
			return tempReturn;


		}

		//The node has one child 
		if (root->rightNode != nullptr) {

			Node* tempReturn = root->rightNode;
			delete root;
			return tempReturn;

		}


	}


	return root;

}

 std::string Tree::inorder(Node* root) {

	 if (root == nullptr) {

		 return "";
	 }
	 std::string orderedTree;

	 orderedTree += inorder(root->leftNode);
	 orderedTree += std::to_string(root->data) + " ";
	 orderedTree += inorder(root->rightNode);
	 
	 return orderedTree;
 }


 std::string Tree::preorder(Node* root) {

	 if (root == nullptr) {

		 return "";
	 }
	 std::string orderedTree;
	 
	 orderedTree += std::to_string(root->data) + " ";
	 orderedTree += preorder(root->leftNode);
	 orderedTree += preorder(root->rightNode);

	 return orderedTree;
 }

 std::string Tree::postorder(Node* root) {

	 if (root == nullptr) {

		 return "";
	 }

	 std::string orderedTree;

	 orderedTree += postorder(root->leftNode);
	 orderedTree += postorder(root->rightNode);
	 orderedTree += std::to_string(root->data) + " ";

	 return orderedTree;
 }

 int Tree::countNodes(Node* root) {

	 if (root == nullptr) {

		 return 0;
	 }

	 int nodeNumber = 0;

	 nodeNumber += countNodes(root->leftNode);
	 nodeNumber += countNodes(root->rightNode);

	 return nodeNumber += 1;

 }

 int Tree::countEdges(Node* root) {

	 return countNodes(root) - 1;
 }

 int Tree::height(Node* root) {

	 if (root == nullptr) {

		 return 0;
	 }

	 return 1 + std::max(height(root->leftNode), height(root->rightNode));

 }