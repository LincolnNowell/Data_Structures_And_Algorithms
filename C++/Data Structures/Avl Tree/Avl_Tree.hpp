#pragma
#include <algorithm>

/*
    Avl tree is templated to hold all types of data
*/

template<class T>
class Avl_Tree
{
private:
    template<class T>
    struct Avl_Node
    {
        Avl_Node(T value){
            value = value;
            height = 1;
            left = nullptr;
            right = nullptr;
        }

        T value;
        int height;
        Avl_Node* left;
        Avl_Node* right;
    };

public:

    Avl_Node<T>* root;

    Avl_Tree(){
        root = nullptr;
    };

    // calculate the hieght of subtree
    int height(Avl_Node* temp){
        int max = 0;
        if(temp != nullptr){
            int Left_Height = height(temp->left);
            int Right_Height = height(temp->right);
            int max_height = std::max(Left_Height,Right_Height);
            max = max_height + 1;
        }
        return max;
    }

    //get the hieght difference between two subtrees
    int difference(Avl_Node<T>* temp){
        int Left_Height = height(temp->left);
        int Right_Hieght = height(temp->right);
        int subTreeHeightDiff = Left_Height - Right_Hieght;
        return subTreeHeightDiff;
    }

    // take Grandparent node attach child node to Grandparent
    // attach parent node to child
    Avl_Node* LeftSubtreeRotationLeft(Avl_Node* parent){
        Avl_Node* temp;
        temp = parent->left;
        parent->left = temp->right;
        temp->right = parent;
        return temp;
    }

    Avl_Node* LeftSubtreeRotationRight(Avl_Node* parent){
        Avl_Node* temp;
        temp = parent->right;
        parent->left = RightSubtreeRotationRight(temp);
        return LeftSubtreeRotationLeft(parent);
    }

    Avl_Node* RightSubtreeRotationRight(Avl_Node* parent){
        Avl_Node* temp;
        temp = parent->left;
        parent->left = LeftSubtreeRotationLeft(temp);
        return RightSubtreeRotationRight(parent);
    }

    Avl_Node* RightSubtreeRotationLeft(Avl_Node* parent){
        Avl_Node* temp;
        temp = parent->right;
        parent->right = LeftSubtreeRotationLeft(temp);
        return RightSubtreeRotationRight(parent);
    }

    Avl_Node* balance(Avl_Node* temp){
        // balance factor determines which subtree is larger
        // if negative, left side larger
        // if positive, right side larger
        int balance_factor = difference(temp);
        if(balance_factor > 1){
            if(difference(temp->left) > 0){
                temp = LeftSubtreeRotationLeft(temp);
            }
            else{
                temp = LeftSubtreeRotationRight(temp);
            }
        }
        else if(balance_factor < -1){
            if(difference(temp->right) > -1){
                temp = RightSubtreeRotationLeft(temp);
            }
            else{
                temp = RightSubtreeRotationRight(temp);
            }
        }

        return temp;
    }

    // smaller values than root are inserted on the left
    // larger values than root are inserted on the right
    Avl_Node* insert(Avl_Node* root, T value){
        if(root == nullptr){
            root = new Avl_Node(value);
            return root;
        }
        //right insertion
        else if(value < root->value){
            root->left = insert(root->left, value);
            root = balance(root);
        }
        //left insertion
        else if(value >= root->value){
            root->right = insert(root->right,value);
            root = balance(root);
        }

        return root;
    }

    //traverse through tree displaying the values recursively
    void display(Avl_Node* ptr, int level){

        if(ptr != nullptr){
            
            display(ptr->right,level+1);
            std::cout << "\n";
            if(ptr == root){
                std::cout << "Root ->";
                for (size_t i = 0; i < level and ptr != root; i++){
                    std::cout << "     ";
                }
                std::cout << ptr->value;
                display(ptr->left,level + 1);
                
            }
        }
    }

    // inorder , preorder, postorder only change the order of the 
    // values shown, not how the tree is traversed

    // traverse subtrees in left right order, first displaying the left node
    // values then right moving up the tree until the root is reached
    void inorder(Avl_Node* tree){
        // function stops returning recursively when the last node
        // of the subtree has been reached
        if(tree == nullptr){
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
    void preOrder(Avl_Node* tree){
        if(tree == nullptr){
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
    void postorder(Avl_Node* tree){
        if(tree == nullptr){
            return;
        }
        postorder(tree->left); 
        postorder(tree->right);
        std::cout << tree->value << " ";
    }
 
    ~Avl_Tree();
};
