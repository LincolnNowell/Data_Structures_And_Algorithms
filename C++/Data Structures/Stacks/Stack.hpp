#pragma

template<typename T>
class Stack
{
    private:

    T* stackArray;
    int capacity;
    int top;

    public:

    Stack(int size)
    : capacity(size), top(0){
        stackArray = new T[capacity];
    }

    void push(T val){
        if(top == capacity) throw Stack::Overflow();
        stackArray[top] = val;
        top++;
    }

    void pop(T& val){
        if(isEmpty()) throw Stack::Underflow();
        top--;
        val = stackArray[top]; 
    }

    bool isEmpty() const {
        return top == 0;
    }

    ~Stack(){
        delete[] stackArray;
    }

    class Overflow{};
    class Underflow{};
};