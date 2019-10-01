#include "LinkedList.h"

template<class T>
bool Linked_List<T>::search(T value){
	List<T>* hold = head;

	while (hold != NULL)
	{
		if(hold->value == data){
			return true;
		}
		hold = hold->next;
	}
	return false;
}
template<class T>
void Linked_List<T>::Add_Node(T value){
	if(head == NULL){
		head = new List<T>(value);
	}
	else{
		List<int>* ptr = head;

		while(ptr != NULL){
			ptr = ptr->next;
		}

		ptr->next = new List<T>(value);
	}
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

void Linked_List_Struct_Ex(){

	List<int>* head = new List<int>(12);

	List<int>* secondptr = new List<int>(14);
	head->next = secondptr;

	std::cout << head->value << "\n";
	std::cout << head->next->value << "\n";

	delete head->next;
	delete head;
}

void Create_Linked_List(){

	List<int>* head = new List<int>(RandomNumber());

	List<int>* ptr = head;

	for(int i = 0; i < 50; ++i){
		ptr->next = new List<int>(RandomNumber());
		ptr = ptr->next;
	}

	print_list_contents(head);
	delete_entire_list(&head);

	delete head;
}

void print_list_contents(List<int>* listPtr){
	while(listPtr != NULL){
		std::cout << listPtr->value << "\n";
		listPtr = listPtr->next;
	}
}

void delete_entire_list(List<int>** listptr){
	
	List<int>* ptr = *listptr;
	List<int>* Next;

	while(ptr != NULL){

		Next = ptr->next;

		delete ptr;

		ptr = Next;
	}

	*listptr = NULL;
}

int RandomNumber(){
	auto seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine distribution(seed);

	std::uniform_int_distribution <int> random_number(1,100);
	return random_number(distribution);
}
