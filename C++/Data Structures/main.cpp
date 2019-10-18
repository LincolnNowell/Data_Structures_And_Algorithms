#include <iostream>
#include "Heap.hpp"

// Source TechieDelight.com

void MaxEx();
void MinEx();
int main()
{
    std::cout << "\nMax Example \n";
    MaxEx();
    std::cout << "\nMin Example \n";
    MinEx();
}

void MaxEx(){
    MaxHeap<int> Max;
    Max.push(3);
    Max.push(23);
    Max.push(45);

    std::cout << "Size Of Max Heap is " << Max.size() << "\n";
    std::cout << Max.top() << " ";
    Max.pop();

    std::cout << Max.top() << " ";
    Max.pop();

    std::cout << Max.top() << " ";
    Max.pop();

    if(Max.empty()){
        std::cout << "\nEmpty\n";
    }
}

void MinEx(){
    MinHeap<int> Min;

    Min.push(3);
    Min.push(23);
    Min.push(45);

    std::cout << "Size Of Min Heap is " << Min.size() << "\n";
    std::cout << Min.top() << " ";
    Min.pop();

    std::cout << Min.top() << " ";
    Min.pop();

    std::cout << Min.top() << " ";
    Min.pop();

    if(Min.empty()){
        std::cout << "\nEmpty\n";
    }  
}