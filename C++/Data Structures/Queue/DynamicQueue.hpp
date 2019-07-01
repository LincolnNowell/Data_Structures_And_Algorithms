#pragma

template<typename T>
class DynamicQueue
{
private:
    class Node{

        friend class DynamicQueue;
        T value;
        Node* next;
        Node(T value, Node* next = NULL)
            : value(value), next(next){           
        }
    };

    Node* front;
    Node* back;
public:
    DynamicQueue(){
        front = NULL;
        back = NULL;
    };
    
    ~DynamicQueue(){
        clear();
    };

    void enqueue(T val){
        if(isEmpty()){
            front = new Node(val);
            back = front;
        }
        else{
            back->next = new Node(val);
            back = back->next;
        }
    }

    void dequeue(T& val){
        if(isEmpty()){
            std::cout << "The queue is empty.\n";
            return;
        }

        Node* temp;

        val = front->value;
        temp = front;
        front = front->next;
        delete temp;
    }

    bool isEmpty(){
        return front == NULL;
    }

    void clear(){
        T val;

        while (!isEmpty()){
            dequeue(val);
        }
    }
};

