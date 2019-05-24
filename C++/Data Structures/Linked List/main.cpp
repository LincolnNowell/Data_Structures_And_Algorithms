/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Linked List examples
 *
 *        Version:  1.0
 *        Created:  5/20/2019 5:32:47 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Lincoln Nowell 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <random>
#include <chrono>
#include "LinkedList.h"

int RandomNumber();

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
	
	List<int>* ptr = listptr->next;

	while(ptr != NULL){
		List<int>* garbage = ptr;

		ptr = listptr->next;

		delete garbage;
	}
}

int main()
{
	Linked_List_Struct_Ex();
	return 0;
}

int RandomNumber(){
	auto seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine distribution(seed);

	std::uniform_int_distribution <int> random_number(1,100);
	return random_number(distribution);
}


