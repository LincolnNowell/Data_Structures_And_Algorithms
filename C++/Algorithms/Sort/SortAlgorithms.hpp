/*
 * =====================================================================================
 *
 *       Filename:  SortAlgorithms.hpp
 *
 *    Description:  Class to Hold Sorting Algorithms
 *
 *        Version:  1.0
 *        Created:  9/29/2019 9:43:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Lincoln Nowell  
 * 
 *
 * =====================================================================================
 */


#pragma 

namespace SortAlgorithms{
	template<typename T>
	void SelectionSort(T arr[],int size);
	template<template<class,class> class Container, class Allocater, typename T>
	void SelectionSort(Container<T,Allocater> container, int);

	template<typename T>
	void BubbleSort(T arr[],int size);
	template<template<class,class> class Container, class Allocater, typename T>
	void BubbleSort(Container<T,Allocater>& container);

	template<typename T>
	void InsertionSort(T arr[],int size);
	template<template<class,class> class Container, class Allocater, typename T>
	void InsertionSort(Container<T,Allocater>& container);
 
	template<typename T>
	void swap(T* left, T* right){
		T temp = *left;
		*left = *right;
		*right = temp;
	}


	template<class T>
	void SelectionSort(T arr[], int size){
		int min_index;

		for (size_t i = 0; i < size - 1; i++){
			min_index = i;
			for (size_t j = i + 1; j < size; j++){
				if(arr[j] < arr[min_index]){
					min_index = j;
				}
			}
			swap(&arr[min_index], &arr[i]);
		}				
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void SelectionSort(Container<T,Allocater> &container){
		int min_index;

		for (size_t i = 0; i < container.size() - 1; i++){
			min_index = i;
			for (size_t j = i + 1; j < container.size(); j++){
				if(container[j] < container[min_index]){
					min_index = j;
				}
			}
			swap(&container[min_index], &container[i]);
		}	
	}

	template<typename T>
	void BubbleSort(T arr[],int size){
		for (size_t i = 0; i < size - 1; i++){
			for (size_t j = 0; j < size-i-1; j++){
				if(arr[j] > arr[j+1]){
					swap(&arr[j],&arr[j+1]);
				}
			}	
		}
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void BubbleSort(Container<T,Allocater>& container){
		for (size_t i = 0; i < container.size() - 1; i++){
			for (size_t j = 0; j < container.size()-i-1; j++){
				if(container[j] > container[j+1]){
					swap(&container[j],&container[j+1]);
				}
			}	
		}
	}
}
