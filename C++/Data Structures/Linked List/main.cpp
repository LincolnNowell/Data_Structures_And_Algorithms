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

#include "LinkedList.h"

void example1();
void example2();
void example3();
void example4();
void example5();

int main()
{
	//example1();
	//example2();
	//example3();
	//example4();
	example5();
	return 0;
}

void example1(){
	//check for member variable

	// test copy constructor
	Linked_List<int>* real_head = new Linked_List<int>();
	Linked_List<int>* head(real_head);

	for(size_t i = 0; i < 100; ++i){
		head->addNode(RandomNumber());
	}

	int guess;
	std::cout << "Enter a number between 1 and 100\n";
	std::cin >> guess;

	if(head->isMember(guess)){
		std::cout << guess << " is a member of the list\n";
	}
	else{
		std::cout << "It is not a member\n";
	}

	delete head, real_head;

}

void example2(){
	//check for member variable

	Linked_List<int>* head = new Linked_List<int>();

	for(size_t i = 0; i < 100; ++i){
		head->addNode(RandomNumber());
	}

	head->DisplayContents();

	int guess;
	std::cout << "Enter a number between 1 and 100 to be removed\n";
	std::cin >> guess;

	if(head->isMember(guess)){
		std::cout << guess << " has been removed.\n";
		head->RemoveNode(guess);
		head->DisplayContents();
	}
	else{
		std::cout << "It is not a member\n";
	}


	delete head;

}

void example3(){

	Linked_List<int>* head = new Linked_List<int>();

	for(size_t i = 0; i < 100; ++i){
		head->addNode(RandomNumber());
	}

	std::cout << "The List of values regularly is\n";
	head->DisplayContents();

	head->reverseNode();
	std::cout << "The List Reversed is\n";

	head->DisplayContents();

	delete head;
}

void example4()
{
	Linked_List<int>* head = new Linked_List<int>();

	for(size_t i = 0; i < 100; ++i){
		head->addNode(RandomNumber());
	}

	int guess;
	std::cout << "Enter a number between 1 and 100\n";
	std::cin >> guess;

	int position = head->findPosition(guess);

	if(position != 0){
		std::cout << guess << " is in node " << position << "\n"; 
	}
	else{
		std::cout << guess << " is not in the list\n";
	}

	delete head;
}

void example5(){
	Linked_List<int>* head = new Linked_List<int>();

	for(size_t i = 0; i < 100; ++i){
		head->addNode(RandomNumber());
	}
	
	head->DisplayContents();

	int guess, pos;
	std::cout << "Enter a number between 1 and 100\n";
	std::cin >> guess;
	std::cout << "Enter a position\n";
	std::cin >> pos;

	head->addAtPostition(guess,pos);

	std::cout << "The list is.\n";
	head->DisplayContents();

	delete head;
}

