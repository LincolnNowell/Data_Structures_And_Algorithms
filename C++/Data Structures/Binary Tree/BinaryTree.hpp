#pragma
#include <iostream>

template<typename T>
struct Leaf
{
    Leaf(T value): left(NULL), right(NULL), value(value){}
    T value;
    Leaf* left;
    Leaf* right;
};


template<typename T>
class Binary_Tree
{
private:
    Leaf<T>* Root;
public:
    Binary_Tree() : Root(NULL){};

    void destroyTree(Leaf<T>*);
    void insert(T value);
    void insert(T value, Leaf<T>*);
    bool search(T value);
    void preorder(Leaf<T>*);
    void removeValue(T value){
        remove(Root, value);
    }
    void remove(Leaf<T>*&, T);
    void makeDeletion(Leaf<T>*&);
    void showPreorder(){
        preorder(Root);
    }
    ~Binary_Tree(){
        destroyTree(Root);
    };
};

// destroys tree recursively
template<typename T>
void Binary_Tree<T>::destroyTree(Leaf<T>* leaf){
    if(leaf != NULL){
        destroyTree(leaf->left);
        destroyTree(leaf->right);
        delete leaf;
    }
}

template<typename T>
void Binary_Tree<T>::insert(T value){
    if(Root != NULL){
        insert(value,Root);
    }else{
        Root = new Leaf(value);
    }
}

/*
  Left side of tree holds values less than root value.
  Right side holds values greater than root value 
*/
template<typename T>
void Binary_Tree<T>::insert(T value, Leaf<T>* leaf){
    if(value < leaf->value){
        if(leaf->left != NULL){
            insert(value, leaf->left);
        }else{
            leaf->left = new Leaf(value);
        }
    }
    else if(value >= leaf->value){
        if(leaf->right != NULL){
            insert(value, leaf->right);
        }else{
            leaf->right = new Leaf(value);
        }
    }
}

template<typename T>
bool Binary_Tree<T>::search(T value){
    Leaf<T> *leaf = Root;

    while (leaf)
    {
        if(leaf->value == value){
            return true;
        }
        //smaller values than the root are stored on the left subtree
        else if(value < leaf->value){
            leaf = leaf->left;
        }
        //larger values than the root are stored on the right subtree
        else{
            leaf = leaf->right;
        }
    }
    
    return false;
}

template<typename T>
void Binary_Tree<T>::remove(Leaf<T> *& tree, T value){
    if(!tree){
        return;
    }
    if(value < tree->value){
        remove(tree->left,value);
    }
    else if(value > tree->value){
        remove(tree->right,value);
    }
    else{
        makeDeletion(tree);
    }
}

template<typename T>
void Binary_Tree<T>::makeDeletion(Leaf<T>*& tree){
    Leaf<T> *nodeToDelete = tree;

    //used to locate the point where the left subtree is attached
    Leaf<T> *attachPoint;

    if(tree->right == nullptr){
        //replace tree with its left subtree
        tree = tree->left;
    }
    else if(tree->left == nullptr){
        //replace tree with its right subtree
        tree = tree->right;
    }
    else{
        //node has two children

        //move to right subtree
        attachPoint = tree->right;

     //locate the smallest node in the right subtree
     //by moving as far to the left as possible
        while (attachPoint->left != nullptr)
        {
            attachPoint = attachPoint->left;

            //attach the left subtree of the original tree as the left
            //subtree of the smallest node
            //in the right subtree
            attachPoint->left = tree->left;

            //replace the original tree with its right subtree
            tree = tree->right;   
        }        
    }

    //delete original tree
    delete nodeToDelete;
}

//display values of tree recursively
template<typename T>
void Binary_Tree<T>::preorder(Leaf<T>* node){
    if(node){
        std::cout << node->value << "\n";
        preorder(node->left);
        preorder(node->right);
    }
}