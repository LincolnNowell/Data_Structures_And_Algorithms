#include <iostream>
#include "Stack.hpp"
#include "DynamicStack.hpp"

void StackExample();
void DynamicStackExample();

int main()
{
    DynamicStackExample();
}

void StackExample()
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

void DynamicStackExample()
{
    DynamicStack<int> obj;

    for(size_t i = 0; i < 3; i++){
        int num;
        std::cout << "Enter a number.\n";
        std::cin >> num;
        obj.push(num);
        std::cout  << num << " has been pushed to the stack.\n"; 
    }

    int num;
    obj.pop(num);

    std::cout << num << " has been popped from the stack.\n";
    std::cout << "Your remaining values are.\n";
    while(!obj.isEmpty()){
        obj.pop(num);
        std::cout << num << "\n";
    }

    std::cout << "The Stack is Empty.\n";

}