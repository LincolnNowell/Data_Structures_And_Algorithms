#include <iostream>
#include "BinaryTree.hpp"

auto main() -> int
{
    Binary_Tree<int> tree;

    for(size_t i = 0; i < 100; i++){
        tree.insert(i);
    }

    int value;

    std::cout << "Enter a value to remove.\n";
    std::cin >> value;

    tree.removeValue(value);


    if(tree.search(value)){
        std::cout << "Error\n";
    }
    else{
        std::cout << value << " has been removed.\n";
    }

    tree.showPreorder();
}