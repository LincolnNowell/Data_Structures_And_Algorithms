/*
 * =====================================================================================
 *
 *       Filename:  SortAlgorithms.hpp
 *
 *    Description:  Namespace to Hold Sorting Algorithms
 *
 *        Version:  1.0
 *        Created:  9/29/2019 9:43:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Lincoln Nowell  
 * 			Sources: GeeksForGeeks.org
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
	void MergeSort(T arr[],int left, int right);
	template<template<class,class> class Container, class Allocater, typename T>
	void MergeSort(Container<T,Allocater>& container,int left, int right);

	template<typename T>
	void Merge(T arr[],int left, int merged, int right);
	template<template<class,class> class Container, class Allocater, typename T>
	void Merge(Container<T,Allocater>& container,int left, int merged, int right);

	template<typename T>
	void QuickSort(T arr[],int left, int right);
	template<template<class,class> class Container, class Allocater, typename T>
	void QuickSort(Container<T,Allocater>& container,int left, int right);

	template<typename T>
	void HeapSort(T arr[],int size);
	template<template<class,class> class Container, class Allocater, typename T>
	void HeapSort(Container<T,Allocater>& container);

	template<typename T>
	void heapify(T arr[],int, int);
	template<template<class,class> class Container, class Allocater, typename T>
	void heapify(Container<T,Allocater>&,int,int);

	template<typename T>
	int partition(T arr[],int low, int high);
	template<template<class,class> class Container, class Allocater, typename T>
	int partition(Container<T,Allocater>& container,int low, int high);

	//functions called by the different sorting algortithms

	template<typename T>
	void swap(T* left, T* right){
		T temp = *left;
		*left = *right;
		*right = temp;
	}

	template<typename T>
	int partition(T arr[],int low, int high){
		int pivot = arr[high];
		int i = (low - 1);

		for (int j = low; j <= high - 1; j++){
			if(arr[j] < pivot){
				i++;
				swap(&arr[i], &arr[j]);
			}
		}
		swap(&arr[i + 1], &arr[high]);
		return(i + 1);
	}

	template<template<class,class> class Container, class Allocater, typename T>
	int partition(Container<T,Allocater>& container,int low, int high){
		int pivot = container[high];
		int i = (low - 1);

		for (int j = low; j <= high - 1; j++){
			if(container[j] < pivot){
				i++;
				swap(&container[i], &container[j]);
			}
		}
		swap(&container[i + 1], &container[high]);
		return(i + 1);
	}

	template<typename T>
	void heapify(T arr[],int size, int index){
		int largest = index;
		int left = 2*index + 1;
		int right = 2*index + 2;

		if(left < size and arr[left] > arr[largest]){
			largest = left;
		}

		if(right < size and arr[right] > arr[largest]){
			largest = right;
		}

		if(largest != index){
			swap(&arr[index],&arr[largest]);
			heapify(arr,size,largest);
		}
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void heapify(Container<T,Allocater>& container,int size, int index){
		int largest = index;
		int left = 2*index + 1;
		int right = 2*index + 2;

		if(left < size and container.at(left) > container.at(largest)){
			largest = left;
		}

		if(right < size and container.at(right) > container.at(largest)){
			largest = right;
		}

		if(largest != index){
			swap(&container.at(index),&container.at(largest));
			heapify(container,size,largest);
		}
	}

	//Sorting Algorithms

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

	template<typename T>
	void InsertionSort(T arr[],int size){
		T key;
		int j;
		for (int i = 1; i < size; i++){
			key = arr[i];
			j = i - 1;

			while (j >= 0 and arr[j] > key){
				arr[j + 1] = arr[j];
				j -= 1;
			}
			arr[j + 1] = key;
		}	
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void InsertionSort(Container<T,Allocater>& container){
		T key;
		int j, i;
		for (i = 1; i < container.size(); i++){
			key = container.at(i);
			j = i - 1;

			while (j >= 0 and container.at(j) > key){
				container.at(j + 1) = container.at(j);
				j -= 1;
			}
			container.at(j + 1) = key;
		}
	}

	template<typename T>
	void Merge(T arr[],int left, int merged, int right){
		int i, j, k;
		int n1 = merged - left + 1;
		int n2 = right - merged;

		T Left[n1], Right[n2];

		for (i = 0; i < n1; i++){
			Left[i] = arr[left + i];
		}
		for (j = 0; j < n2; j++){
			Right[j] = arr[merged + 1 + j];
		}

		i = 0, j = 0, k = left;

		while (i < n1 and j < n2){
			if(Left[i] <= Right[j]){
				arr[k] = Left[i];
				i++;
			}
			else{
				arr[k] = Right[j];
				j++;
			}
			k++;
		}

		while (i < n1){
			arr[k] = Left[i];
			i++;
			k++;
		}
		
		while (j < n2){
			arr[k] = Right[j];
			j++; 
			k++;
		}		
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void Merge(Container<T,Allocater>& container,int left, int merged, int right){
		int i, j, k;
		int n1 = merged - left + 1;
		int n2 = right - merged;

		T Left[n1], Right[n2];

		for (i = 0; i < n1; i++){
			Left[i] = container.at(left + i);
		}
		for (j = 0; j < n2; j++){
			Right[j] = container.at(merged + 1 + j);
		}

		i = 0, j = 0, k = left;

		while (i < n1 and j < n2){
			if(Left[i] <= Right[j]){
				container.at(k) = Left[i];
				i++;
			}
			else{
				container.at(k) = Right[j];
				j++;
			}
			k++;
		}

		while (i < n1){
			container.at(k) = Left[i];
			i++, k++;
		}
		
		while (j < n2){
			container.at(k) = Right[j];
			j++, k++;
		}
	}

	template<typename T>
	void MergeSort(T arr[],int left, int right){
		if(left < right){
			int merged = left + (right - left) / 2;

			MergeSort(arr,left,merged);
			MergeSort(arr, merged + 1, right);

			Merge(arr,left,merged,right);
		}
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void MergeSort(Container<T,Allocater>& container,int left, int right){
		if(left < right){
			int merged = left + (right - left) / 2;

			MergeSort(container,left,merged);
			MergeSort(container, merged + 1, right);

			Merge(container,left,merged,right);
		}
	}

	template<typename T>
	void QuickSort(T arr[],int low, int high){
		if(low < high){
			int pi = partition(arr,low,high);
			QuickSort(arr,low,pi - 1);
			QuickSort(arr,pi + 1, high);
		}
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void QuickSort(Container<T,Allocater>& container,int low, int high){
			if(low < high){
			int pi = partition(container,low,high);
			QuickSort(container,low,pi - 1);
			QuickSort(container,pi + 1, high);
		}
	}

	template<typename T>
	void HeapSort(T arr[],int size){
		for (int i = size / 2 - 1; i >= 0; i--) 
			heapify(arr, size, i); 

		for (int i = size - 1; i >= 0; i--) 
		{ 
			swap(&arr[0], &arr[i]); 

			heapify(arr, i, 0); 
		} 
	}
	
	template<template<class,class> class Container, class Allocater, typename T>
	void HeapSort(Container<T,Allocater>& container){
		int size = container.size();
		for (int i = size / 2 - 1; i >= 0; i--){ 
			heapify(container,container.size(), i); 
		}

		for (int i = container.size() - 1; i >= 0; i--) { 
			swap(&container.at(0), &container.at(i)); 
			heapify(container,i,0); 
		} 
	}

}
