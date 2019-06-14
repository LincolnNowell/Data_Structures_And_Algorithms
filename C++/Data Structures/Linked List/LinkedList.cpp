#include "LinkedList.h"

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
	delete_entire_list(head);
}

void print_list_contents(List<int>* listPtr){
	while(listPtr != NULL){
		std::cout << listPtr->value << "\n";
		listPtr = listPtr->next;
	}
}

void delete_entire_list(List<int>* listptr){
	
	List<int>* ptr = listptr;
	List<int>* Next;

	while(ptr != NULL){

		Next = ptr->next;

		delete ptr;

		ptr = Next;
	}

	listptr = NULL;
}

int RandomNumber(){
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_real_distribution <> random_number(1,100);
	return random_number(gen);
}
