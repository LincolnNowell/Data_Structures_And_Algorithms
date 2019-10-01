#include <iostream>
#include "Avl_Tree.hpp"

int main()
{
    int choice, item;
    Avl_Tree<int> avl;

    while (true)
    {
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
            avl.insert(avl.root,item);
            break;

        case 2:
            // should return true if nullpointer
            // pointer is converted to boolean value
            if(!avl.root){
                std::cout << "Tree is Empty\n";
            }
            else{
                avl.display(avl.root,1);
            }
            break;
        case 3:
            if(avl.root){
                std::cout << "The values display in inorder method\n";
                avl.inorder(avl.root);
            }
        case 4:
            if(avl.root){
                std::cout << "The values displayed in preorder method\n";
                avl.preOrder(avl.root);
            }
        case 5:
            if(avl.root){
                std::cout << "The values displayed in postorder method\n";
                avl.postorder(avl.root);
            }
        default:
            break;
        }
    }
    
}