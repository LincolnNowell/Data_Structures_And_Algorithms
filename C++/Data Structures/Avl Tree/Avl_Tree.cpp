#include <iostream>
#include <algorithm>

/*
	Avl tree is templated to hold all types of data
*/

template<class T>
struct Avl_Node
{
	Avl_Node(T Newvalue) {
		value = Newvalue;
		height = 1;
		left = nullptr;
		right = nullptr;
	}

	T value;
	int height;
	Avl_Node* left;
	Avl_Node* right;

	~Avl_Node() {
		delete left, right;
	}
};

Avl_Node<int>* TreeRoot = nullptr;

template<class T>
class Avl_Tree
{
private:

public:

	Avl_Tree() {
	};

	int height(Avl_Node<T>* temp);

	int difference(Avl_Node<T>* temp);

	Avl_Node<T>* LeftSubtreeRotationLeft(Avl_Node<T>* parent);

	Avl_Node<T>* LeftSubtreeRotationRight(Avl_Node<T>* parent);

	Avl_Node<T>* RightSubtreeRotationRight(Avl_Node<T>* parent);

	Avl_Node<T>* RightSubtreeRotationLeft(Avl_Node<T>* parent);

	Avl_Node<T>* balance(Avl_Node<T>* temp);

	Avl_Node<T>* insert(Avl_Node<T>* root, T value);

	void display(Avl_Node<T>* ptr, int level);

	void inorder(Avl_Node<T>* tree);

	void preOrder(Avl_Node<T>*);

	void postorder(Avl_Node<T>*);

    void DestroyTree(Avl_Node<T>*);

	~Avl_Tree()
	{
		DestroyTree(TreeRoot);
	};
};

// calculate the hieght of subtree
template<typename T>
int Avl_Tree<T>::height(Avl_Node<T>* temp) {
	int max = 0;
	if (temp != nullptr) {
		int Left_Height = height(temp->left);
		int Right_Height = height(temp->right);
		int max_height = std::max(Left_Height, Right_Height);
		max = max_height + 1;
	}
	return max;
}

//get the hieght difference between two subtrees
template<typename T>
int Avl_Tree<T>::difference(Avl_Node<T>* temp) {
	int Left_Height = height(temp->left);
	int Right_Hieght = height(temp->right);
	int subTreeHeightDiff = Left_Height - Right_Hieght;
	return subTreeHeightDiff;
}

// take Grandparent node attach child node to Grandparent
// attach parent node to child
template<typename T>
Avl_Node<T>* Avl_Tree<T>::LeftSubtreeRotationLeft(Avl_Node<T>* parent) {
	Avl_Node<T>* temp;
	temp = parent->left;
	parent->left = temp->right;
	temp->right = parent;
	return temp;
}

template<typename T>
Avl_Node<T>* Avl_Tree<T>::LeftSubtreeRotationRight(Avl_Node<T>* parent) {
	Avl_Node<T>* temp;
	temp = parent->left;
	parent->left = RightSubtreeRotationRight(temp);
	return LeftSubtreeRotationLeft(parent);
}

template<typename T>
Avl_Node<T>* Avl_Tree<T>::RightSubtreeRotationRight(Avl_Node<T>* parent) {
	Avl_Node<T>* temp;
	temp = parent->right;
	parent->right = temp->left;
	temp->left = parent;
	return temp;
}

template<typename T>
Avl_Node<T>* Avl_Tree<T>::RightSubtreeRotationLeft(Avl_Node<T>* parent) {
	Avl_Node<T>* temp;
	temp = parent->right;
	parent->right = LeftSubtreeRotationLeft(temp);
	return RightSubtreeRotationRight(parent);
}


template<typename T>
Avl_Node<T>* Avl_Tree<T>::balance(Avl_Node<T>* temp) {
	// balance factor determines which subtree is larger
	// if negative, left side larger
	// if positive, right side larger
	int balance_factor = difference(temp);
	if (balance_factor > 1) {
		if (difference(temp->left) > 0) {
			temp = LeftSubtreeRotationLeft(temp);
		}
		else {
			temp = LeftSubtreeRotationRight(temp);
		}
	}
	else if (balance_factor < -1) {
		if (difference(temp->right) > 0) {
			temp = RightSubtreeRotationLeft(temp);
		}
		else {
			temp = RightSubtreeRotationRight(temp);
		}
	}

	return temp;
}

// smaller values than root are inserted on the left
// larger values than root are inserted on the right
template<typename T>
Avl_Node<T>* Avl_Tree<T>::insert(Avl_Node<T>* root, T value) {
	if (root == nullptr) {
		root = new Avl_Node<T>(value);
		return root;
	}
	//right insertion
	else if (value < root->value) {
		root->left = insert(root->left, value);
		root = balance(root);
	}
	//left insertion
	else if (value >= root->value) {
		root->right = insert(root->right, value);
		root = balance(root);
	}

	return root;
}

//traverse through tree displaying the values recursively
template<typename T>
void Avl_Tree<T>::display(Avl_Node<T>* ptr, int level) {
	size_t i;
	if (ptr != nullptr) {

		display(ptr->right, level + 1);
		std::cout << "\n";
		if (ptr == TreeRoot) {
			std::cout << "Root ->";
			for (i = 0; i < level and ptr != TreeRoot; i++) {
				std::cout << "     ";
				std::cout << ptr->value;
				display(ptr->left, level + 1);
			}
		}
	}
}


// inorder , preorder, postorder only change the order of the 
// values shown, not how the tree is traversed

// traverse subtrees in left right order, first displaying the left node
// values then right moving up the tree until the root is reached

template<typename T>
void Avl_Tree<T>::inorder(Avl_Node<T>* tree) {
	// function stops returning recursively when the last node
	// of the subtree has been reached
	if (tree == nullptr) {
		return;
	}
	inorder(tree->left);
	std::cout << tree->value << "  ";
	//will hold the previouses nodes pointer when function returns
	inorder(tree->right);
}

// display values in a top down order
// traverses tree the same as inorder function in left to right 
// fashion
template<typename T>
void Avl_Tree<T>::preOrder(Avl_Node<T>* tree) {
	if (tree == nullptr) {
		return;
	}
	std::cout << tree->value << " ";
	preOrder(tree->left);
	//will hold the previouses nodes pointer when function returns
	preOrder(tree->right);
}

//display values in a side to side order from left to right nodes
// traverses tree the same as inorder function in left to right 
// fashion
template<typename T>
void Avl_Tree<T>::postorder(Avl_Node<T>* tree) {
	if (tree == nullptr) {
		return;
	}
	postorder(tree->left);
	postorder(tree->right);
	std::cout << tree->value << " ";
}

template<typename T>
void Avl_Tree<T>::DestroyTree(Avl_Node<T>* ptr){
    if(ptr){
        DestroyTree(ptr->left);
        DestroyTree(ptr->right);
        delete ptr;
    }
}

int main()
{
	int choice, item;
	Avl_Tree<int> avl;
    bool start = true;


	while (start)
	{
		system("pause");
		system("cls");
		std::cout << "Avl Tree\n";
		std::cout << "1. Insert value\n";
		std::cout << "2. Display balance tree\n";
		std::cout << "3. Inorder Traversal\n";
		std::cout << "4. Preorder Traversal\n";
		std::cout << "5  Postorder Traversal\n";
		std::cout << "6 End\n";
		std::cout << "enter your choice\n";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << "Enter the value you want to enter\n";
			std::cin >> item;
			TreeRoot = avl.insert(TreeRoot, item);
			break;

		case 2:
			// should return true if nullpointer
			// pointer is converted to boolean value
			if (!TreeRoot) {
				std::cout << "Tree is Empty\n";
			}
			else {
				avl.display(TreeRoot, 1);
			}
			break;
		case 3:
			if (TreeRoot) {
				std::cout << "The values display in inorder method\n";
				avl.inorder(TreeRoot);
			}
			break;
		case 4:
			if (TreeRoot) {
				std::cout << "The values displayed in preorder method\n";
				avl.preOrder(TreeRoot);
			}
			break;
		case 5:
			if (TreeRoot) {
				std::cout << "The values displayed in postorder method\n";
				avl.postorder(TreeRoot);
			}
            break;
        case 6:
            start = false;
			break;
		default:
			break;
		}
	}

}