#include <iostream>
#include "LinkedList.h"

template<class T>
void Linked_List<T>::Add_Node(T value){
	if(head == NULL){
		head = new List(value);
	}
	else{
		List* ptr = head;

		while(ptr != NULL){
			ptr = ptr->next;
		}

		ptr->next = new List(value);
	}
}

template<class T>
void Linked_List<T>::DisplayContents() const {
	Linked_List* ptr = head;

	while(ptr->head != NULL){
		std::cout << ptr->value << '\n';
		//move to next node
		ptr = ptr->next;
	}
}

template<class T>
Linked_List<T>::~Linked_List(){
	//hold the pointer of the current node
	List* ptr = head;

	while(ptr != NULL){
		//hold node to be deleted
		List* deleted_node = ptr;

		ptr = ptr->next;

		delete deleted_node;
	}
}
