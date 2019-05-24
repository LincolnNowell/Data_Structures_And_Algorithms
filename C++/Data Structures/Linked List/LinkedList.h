#pragma 

template<typename T>
struct List{

	List(T val, List* nxt = NULL){
		value = val;
		Next = nxt;
	}

	T value;
	Template_Linked_List* next;
};

template<class T>
class Linked_List{

protected:

	List* head;
public:

	Linked_List(Linked_List* Nxt = NULL){ head = NULL;}
	~Linked_List();
	
	void Add_Node(T value);
	void DisplayContents() const;
};
