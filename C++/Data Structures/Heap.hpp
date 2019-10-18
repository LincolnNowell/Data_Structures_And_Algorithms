#pragma
#include <iostream>
#include <vector>
#include <stdexcept>

// Source TechieDelight.com

template<typename T>
void swap(T* left, T* right);

template<class T>
class MinHeap
{
private:
    std::vector<T> elements;
    void heapify_up(int);
    void heapify_down(int);

    int parent(int index){
        return (index - 1) / 2;
    }
    int LeftChildIndex(int index){
        return (2*index + 1);
    }
    int RightChildIndex(int index){
        return (2*index + 2);
    }

public:

    unsigned int size(){
        return elements.size();
    }

    bool empty(){
        return size() == 0;
    }

    void push(int);
    void pop();
    int top();
};

template<typename T>
void MinHeap<T>::heapify_up(int index){
    int left = LeftChildIndex(index);
    int right = RightChildIndex(index);

    int largest = index;

    if(left < elements.size() and elements[left] > elements[index]){
        largest = left;
    } 
    else if(right < elements.size() and elements[right] > elements[largest]){
        largest = right;
    }

    if(largest != index){
        swap(&elements[index],&elements[largest]);
        heapify_down(largest);
    }
}

template<typename T>
void MinHeap<T>::heapify_down(int index){
    if(index and elements[parent(index)] < elements[index]){
        swap(&elements[index], &elements[parent(index)]);
        heapify_up(parent(index));
    }
}

template<typename T>
int MinHeap<T>::top(){
    try{
        if(size() == 0){
            throw std::out_of_range("Vector<X>::at() : "
						"index is out of range(Heap underflow)");
        }
        return elements.at(0);
    }
    catch(const std::out_of_range& oor){
        std::cout << "\n" << oor.what();
    }

    //to quite warnings
    return -1;
}

template<typename T>
void MinHeap<T>::pop(){
    try{
        if(size() == 0){
            throw std::out_of_range("Vector<X>::at() : "
						"index is out of range(Heap underflow)");
        }

        elements[0] = elements.back();
        elements.pop_back();

        heapify_down(0);
    }
    catch(const std::out_of_range& oor){
        std::cout << "\n" << oor.what();
    }
}

template<typename T>
void MinHeap<T>::push(int index){
    elements.push_back(index);
    int Index = size() - 1;
    heapify_down(Index);
}

template<class T>
class MaxHeap
{
private:
    std::vector<T> elements;
    void heapify_up(int);
    void heapify_down(int);

    int parent(int index){
        return (index - 1) / 2;
    }
    int LeftChildIndex(int index){
        return (2*index + 1);
    }
    int RightChildIndex(int index){
        return (2*index + 2);
    }

public:

    unsigned int size(){
        return elements.size();
    }

    bool empty(){
        return size() == 0;
    }

    void push(int);
    void pop();
    int top();
};

template<typename T>
void MaxHeap<T>::heapify_down(int index){
    int left = LeftChildIndex(index);
    int right = RightChildIndex(index);

    int smallest = index;

    if(left < elements.size() and elements[left] < elements[index]){
        smallest = left;
    } 
    else if(right < elements.size() and elements[right] < elements[smallest]){
        smallest = right;
    }

    if(smallest != index){
        swap(&elements[index],&elements[smallest]);
        heapify_up(smallest);
    }
}

template<typename T>
void MaxHeap<T>::heapify_up(int index){
    if(index and elements[parent(index)] > elements[index]){
        swap(&elements[index], &elements[parent(index)]);
        heapify_up(parent(index));
    }
}

template<typename T>
int MaxHeap<T>::top(){
    try{
        if(size() == 0){
            throw std::out_of_range("Vector<X>::at() : "
						"index is out of range(Heap underflow)");
        }
        return elements.at(0);
    }
    catch(const std::out_of_range& oor){
        std::cout << "\n" << oor.what();
    }

    //to quite warnings
    return -1;
}

template<typename T>
void MaxHeap<T>::pop(){
    try{
        if(size() == 0){
            throw std::out_of_range("Vector<X>::at() : "
						"index is out of range(Heap underflow)");
        }

        elements[0] = elements.back();
        elements.pop_back();

        heapify_down(0);
    }
    catch(const std::out_of_range& oor){
        std::cout << "\n" << oor.what();
    }
}

template<typename T>
void MaxHeap<T>::push(int index){
    elements.push_back(index);
    int Index = size() - 1;
    heapify_down(Index);
}

template<typename T>
void swap(T* left, T* right){
    T temp = *left;
    *left = *right;
    *right = temp;
}
