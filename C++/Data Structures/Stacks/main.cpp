#include <iostream>
#include "Stack.hpp"

int main()
{
    Stack<int> arr(5);
    int values[] = {12,3,4,5,2};
    int value;

    for (int val : values)
    {   
        std::cout << val << "\n";
        arr.push(val);
    }

    std::cout << "Pop Values\n";

    while(!arr.isEmpty()){
        arr.pop(value);
        std::cout << value << "\n";
    }

    std::cout << "\n";
}