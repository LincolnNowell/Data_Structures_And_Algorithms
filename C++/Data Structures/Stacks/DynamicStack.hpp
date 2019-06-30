#pragma

template<typename T>
class DynamicStack
{
private:
    class StackNode{

        friend class DynamicStack;

        StackNode(T value, StackNode* next = NULL)
        : value(value), next(next){

        }

        T value;
        StackNode* next;
    };

    StackNode* head;
public:
    DynamicStack() : head(NULL){};
    ~DynamicStack(){
        if(head != NULL) delete head;
    };

    void push(T value){
        head = new StackNode(value, head);
    }
    
    void pop(T& val){

        StackNode* node;
        
        if(isEmpty()){
            std::cout << "Empty\n";
            return;
        }
        else{
            val = head->value;
            node = head;
            head = head->next;
            delete node;
        }
    }

    bool isEmpty() const{
        return head == NULL;
    };
};

