#include <iostream>
#include "Queue.hpp"
#include "DynamicQueue.hpp"

void QueueEx();
void DynamicQueueEx();

int main()
{
    DynamicQueueEx();
}

void QueueEx(){
    Queue<int> obj(5);

    int num = 0;
    int input;
    std::cout << "Enter 5 numbers.\n";
    while(num != 5){
        std::cin >> input;
        obj.enqueue(input);
        std::cout << input << " added to queue.\n";
        num++;
    }

    while(!obj.isEmpty()){
        int num;
        obj.dequeue(num);
        std::cout << num << " has been dequeued.\n";
    }
}

void DynamicQueueEx(){
    DynamicQueue<int> obj;

    int num = 0;
    int input;
    std::cout << "Enter 5 numbers.\n";
    while(num != 5){
        std::cin >> input;
        obj.enqueue(input);
        std::cout << input << " added to queue.\n";
        num++;
    }

    while(!obj.isEmpty()){
        int num;
        obj.dequeue(num);
        std::cout << num << " has been dequeued.\n";
    }
}