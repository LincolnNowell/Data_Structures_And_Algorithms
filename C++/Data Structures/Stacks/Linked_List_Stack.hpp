#pragma

template<class T>
struct Node
{
    Node(T value) value(value), next(nullptr){}
    T value;
    Node* next;
};

template<class T>
class Linked_List_Stack
{
private:
    Node* root;
public:
    Linked_List_Stack() : root(nullptr){};
    void push(T);
    void pop(T&);
    bool isEmpty();
    ~Linked_List_Stack();
};


template<typename T>
void Linked_List_Stack<T>::push(T value){
    root = new Node(value);
}

template<typename T>
void Linked_List_Stack<T>::pop(T& value){
    Node<T>* ptr = root->next;

    while (ptr){
        ptr = ptr->next;
    }

    value = ptr->value;
    delete ptr;
}
template<typename T>
bool Linked_List_Stack<T>::isEmpty(){
    return !root;
}



