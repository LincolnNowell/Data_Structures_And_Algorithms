#pragma 
#include <iostream>
#include <random>
#include <cstddef>

template<typename T>
struct List{

	List(T val, List* nxt = NULL){
		value = val;
		next = nxt;
	}

	T value;
	List<T>* next;
};

template<class T>
class Linked_List{

protected:

	List<T>* head;
public:

	Linked_List(Linked_List* Nxt = NULL){ head = NULL;}
	~Linked_List();
	
	void Add_Node(T value);
	void DisplayContents() const;
};


//Procedural Way 

void Linked_List_Struct_Ex();
void Create_Linked_List();
void print_list_contents(List<int>* listPtr);
void delete_entire_list(List<int>* listptr);
int RandomNumber();