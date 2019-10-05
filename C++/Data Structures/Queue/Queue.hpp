#pragma

template<typename T>
class Queue{

private:
    T* queueArray;
    int queueSize;
    int front;
    int rear;
    int NumItems;

public:
    Queue(int size){
        queueArray = new T[size];
        queueSize = size;
        front = -1;
        rear = -1;
        NumItems = 0;
    }

    void enqueue(T val){

        if(isFull()){
            std::cout << "Queue is full.\n";
            return;
        }

        //calculate new rear position
        rear =  (rear + 1) % queueSize;

        queueArray[rear] = val;

        NumItems++;
    }

    void dequeue(T& val){

        if(isEmpty()){
            std::cout << "Queue is empty.\n";
            return;
        }

        //move to front of queue
        front =  (front + 1) % queueSize;

        val = queueArray[front];

        NumItems--;
    }

    bool isFull() const{
        return NumItems > queueSize;
    }
    bool isEmpty() const{
        return NumItems <= 0;
    }

    void clear(){
        front = -1;
        rear = -1;
        NumItems = 0;
    }

    ~Queue()
    {
        delete [] queueArray;
    }
};
