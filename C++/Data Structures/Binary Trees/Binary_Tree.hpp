#pragma

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
    ~Binary_Tree(){
        destroyTree();
    };
};

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
