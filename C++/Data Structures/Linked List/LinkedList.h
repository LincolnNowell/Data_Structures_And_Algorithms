#pragma 
#include <iostream>
#include <vector>
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
	Linked_List(const Linked_List* ptr){this->head = ptr->head;}
	~Linked_List();

	void addNode(T value);
	void addAtPostition(T value, int pos);
	void RemoveNode(T value);
	void reverseNode();
	bool isMember(T value) const;
	int findPosition(T value) const;
	void DisplayContents() const;
};

template<class T>
void Linked_List<T>::addNode(T value){
	if(head == NULL){
		head = new List<T>(value);
	}
	else{
		List<int>* ptr = head;

		while(ptr->next != NULL){
			ptr = ptr->next;
		}

		ptr->next = new List<T>(value);
	}
}

template<class T>
void Linked_List<T>::addAtPostition(T value, int position){

	List<T>* ptr = head;
	int node = 0;

	List<T>* next;

	if(position == 0){
		int newValue = ptr->value;
		next = ptr->next;
		ptr->next = new List<T>(newValue);
		ptr->value = value;
		ptr->next->next = next;
	}

	ptr = head;

	while (ptr->next != NULL)
	{
		if(node + 1 == position){
			next = ptr->next;
			ptr->next = new List<T>(value);
			ptr->next->next = next;
		}

		++node;
		ptr = ptr->next;
	}
	
	if(node <= position){
		ptr->next = new List<T>(value);
	}
}

template<class T>
void Linked_List<T>::RemoveNode(T value){
	List<T>* ptr = head;

	List<T>* Next;
	while (ptr->next != NULL)
	{
		if(ptr->next->value == value){
			Next = ptr->next->next;
			delete ptr->next;

			ptr->next = Next;

		}

		ptr = ptr->next;
	}
	
}

template<class T>
void Linked_List<T>::reverseNode(){
	List<T>* ptr = head;

	std::vector<T> values;

	while(ptr->next != NULL){
		values.push_back(ptr->value);
		ptr = ptr->next;
	}

	ptr = head;

	auto index = values.size() - 1;
	while (ptr->next != NULL)
	{
		ptr->value = values[index--];
		ptr = ptr->next;
	}
}

template<class T>
bool Linked_List<T>::isMember(T value) const{
	List<T>* ptr = head;

	while(ptr->next != NULL){ 
		if(ptr->value == value){return true;} 
		ptr = ptr->next;
	}

	return false;
}

template<class T>
int Linked_List<T>::findPosition(T value) const{
	List<T>* ptr = head;

	int node = 1;
	while(ptr->next != NULL){
		if(ptr->value == value){return node;}
		++node;
		ptr = ptr->next;
	}

	return 0;
}

template<class T>
void Linked_List<T>::DisplayContents() const {
	List<int>* ptr = head;

	while(ptr->next != NULL){
		std::cout << ptr->value << '\n';
		//move to next node
		ptr = ptr->next;
	}
}

template<class T>
Linked_List<T>::~Linked_List(){
	//hold the pointer of the current node
	List<int>* ptr = head;

	while(ptr != NULL){
		//hold node to be deleted
		List<int>* deleted_node = ptr;

		ptr = ptr->next;

		delete deleted_node;
	}
}



//Procedural Way 

void Linked_List_Struct_Ex();
void Create_Linked_List();
void print_list_contents(List<int>* listPtr);
void delete_entire_list(List<int>* listptr);
int RandomNumber();