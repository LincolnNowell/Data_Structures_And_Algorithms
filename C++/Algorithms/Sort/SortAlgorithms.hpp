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
#include <algorithm> 
#include <iostream>

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
	void CountSort(T arr[],int size);
	template<template<class,class> class Container, class Allocater, typename T>
	void CountSort(Container<T,Allocater>& container);

	template<typename T>
	void RadixSort(T arr[],int size);
	template<template<class,class> class Container, class Allocater, typename T>
	void RadixSort(Container<T,Allocater>& container);

	template<typename T>
	void ShellSort(T arr[],int);
	template<template<class,class> class Container, class Allocater, typename T>
	void ShellSort(Container<T,Allocater>& container);

	template<typename T>
	void TimSort(T arr[],int);
	template<template<class,class> class Container, class Allocater, typename T>
	void TimSort(Container<T,Allocater>& container);

	template<typename T>
	void CombSort(T arr[],int);
	template<template<class,class> class Container, class Allocater, typename T>
	void CombSort(Container<T,Allocater>& container);
	
	template<typename T>
	void PigeonHoleSort(T arr[],int);
	template<template<class,class> class Container, class Allocater, typename T>
	void PigeonHoleSort(Container<T,Allocater>& container);

	template<typename T>
	void CycleSort(T arr[],int);
	template<template<class,class> class Container, class Allocater, typename T>
	void CycleSort(Container<T,Allocater>& container);

	template<typename T>
	void CocktailSort(T arr[],int);
	template<template<class,class> class Container, class Allocater, typename T>
	void CocktailSort(Container<T,Allocater>& container);

	template<typename T>
	void BitonicSort(T arr[],int, int);
	template<template<class,class> class Container, class Allocater, typename T>
	void BitonicSort(Container<T,Allocater>& container,int, int);

	template<typename T>
	void PancakeSort(T arr[],int);
	template<template<class,class> class Container, class Allocater, typename T>
	void PancakeSort(Container<T,Allocater>& container);

	template<typename T>
	void GnomeSort(T arr[],int);
	template<template<class,class> class Container, class Allocater, typename T>
	void GnomeSort(Container<T,Allocater>& container);

	template<typename T>
	void BinaryInsertionSort(T arr[],int);
	template<template<class,class> class Container, class Allocater, typename T>
	void BinaryInsertionSort(Container<T,Allocater>& container);

	template<typename T>
	int BinarySearchUsedInBIsort(T arr[], int item, int low, int high);
	template<template<class,class> class Container, class Allocater, typename T>
	int BinarySearchUsedInBIsort(Container<T,Allocater>& container, int item, int low, int high);

	template<typename T>
	void Flip(T arr[],int);
	template<template<class,class> class Container, class Allocater, typename T>
	void Flip(Container<T,Allocater>& container, int);

	template<typename T>
	int FindMax(T arr[],int);
	template<template<class,class> class Container, class Allocater, typename T>
	int FindMax(Container<T,Allocater>& container, int);

	template<typename T>
	void InnerCall(T arr[],int , int , int );
	template<template<class,class> class Container, class Allocater, typename T>
	void InnerCall(Container<T,Allocater>& ,int , int,int );

	template<typename T>
	void compAndSwap(T arr[], int , int , int );
	template<template<class,class> class Container, class Allocater, typename T>
	void compAndSwap(Container<T,Allocater>&, int , int , int );

	template<typename T>
	void BitonicMerge(T arr[], int, int, int );
	template<template<class,class> class Container, class Allocater, typename T>
	void BitonicMerge(Container<T,Allocater>&, int, int, int);		 

	template<typename T>
	void CountSortUsedInRadixSort(T arr[],int size, int exp);
	template<template<class,class> class Container, class Allocater, typename T>
	void CountSortUsedInRadixSort(Container<T,Allocater>&, int);

	template<typename T>
	void heapify(T arr[],int, int);
	template<template<class,class> class Container, class Allocater, typename T>
	void heapify(Container<T,Allocater>&,int,int);

	template<typename T>
	int partition(T arr[],int low, int high);
	template<template<class,class> class Container, class Allocater, typename T>
	int partition(Container<T,Allocater>& container,int low, int high);

	template<typename T>
	void ModifiedInsertionSort(T arr[],int left, int right);
	template<template<class,class> class Container, class Allocater, typename T>
	void ModifiedInsertionSort(Container<T,Allocater>& container,int left, int right);

	template<typename T>
	void swap(T* left, T* right);

	template<typename T>
	T getMax(T arr[], int size);
	template<template<class,class> class Container, class Allocater, typename T>
	T getMax(Container<T,Allocater>&);

	//functions called by the different sorting algortithms

	template<typename T>
	void swap(T* left, T* right){
		T temp = *left;
		*left = *right;
		*right = temp;
	}

	template<typename T>
	T getMax(T arr[], int size){
		T max = arr[0];
		for (int i = 0; i < size; i++){
			if(arr[i] > max){
				max = arr[i];
			}
		}
		return max;
	}
	
	template<template<class,class> class Container, class Allocater, typename T>
	T getMax(Container<T,Allocater>& container){
		T max = container.at(0);
		for(auto& elements : container){
			if(elements > max){
				max = elements;
			}
		}
		return max;
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

	int getNextGap(int gap){
		gap = (gap*10)/13;
		if(gap < 1){
			return 1;
		}
		return gap;
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

	template<typename T>
	void CountSort(T arr[],int size){
		int max = *std::max_element(arr,arr+size); 
    	int min = *std::min_element(arr,arr+size); 
    	int range = max - min + 1; 

		std::vector<T> count(range), output(size);
		for (int i = 0; i < size; i++){
			count[arr[i]-min]++;
		}

		for (int i = 1; i < count.size(); i++){
			count[i] += count[i-1];
		}

		for (int i = size-1; i >= 0; i--){
			output[count[arr[i]-min]-1] = arr[i];
			count[arr[i]-min]--;
		}

		for (int i = 0; i < size; i++){
			arr[i] = output[i];
		}	
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void CountSort(Container<T,Allocater>& container){
		int max = *std::max_element(container.begin(), container.end()); 
    	int min = *std::min_element(container.begin(), container.end()); 
    	int range = max - min + 1; 

		std::vector<T> count(range), output(container.size());
		for (int i = 0; i < container.size(); i++){
			count[container[i]-min]++;
		}

		for (int i = 1; i < count.size(); i++){
			count[i] += count[i-1];
		}

		for (int i = container.size()-1; i >= 0; i--){
			output[count[container[i]-min]-1] = container[i];
			count[container[i]-min]--;
		}

		for (int i = 0; i < container.size(); i++){
			container[i] = output[i];
		}
	}

	template<typename T>
	void RadixSort(T arr[],int size){
		int max = getMax(arr,size);

		for (size_t exp = 1; max/exp > 0; exp *= 10){
			CountSortUsedInRadixSort(arr,size,exp);
		}
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void RadixSort(Container<T,Allocater>& container){
		int max = getMax(container);

		for (int exp = 1; max/exp > 0; exp *= 10){
			CountSortUsedInRadixSort(container,exp);
		}
		
	}

	template<typename T>
	void CountSortUsedInRadixSort(T arr[],int size, int exp){
		std::vector<T> output(size);
		int i; std::vector<T> count(10,0);

		for(i = 0; i < size; i++){
			count[(arr[i]/exp)%10]++;
		}

		for (i = 1; i < 10; i++){
			count[i] += count[i - 1];
		}

		for (i = size - 1; i >= 0; i--){
			output[count[(arr[i]/exp)%10]-1] = arr[i];
			count[(arr[i]/exp)%10]--;
		}

		for(i = 0; i < size; i++){
			arr[i] = output[i];
		}		
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void CountSortUsedInRadixSort(Container<T,Allocater>& container, int exp){
		int size = container.size();
		std::vector<T> output(size);
		int i; std::vector<T> count(10,0);

		for(i = 0; i < size; i++){
			count[(container[i]/exp)%10]++;
		}

		for (i = 1; i < 10; i++){
			count[i] += count[i - 1];
		}

		for (i = size - 1; i >= 0; i--){
			output[count[(container[i]/exp)%10]-1] = container[i];
			count[(container[i]/exp)%10]--;
		}

		for(i = 0; i < size; i++){
			container[i] = output[i];
		}
	}

	template<typename T>
	void ShellSort(T arr[],int size){
		for (int gap = size/2; gap > 0; gap /= 2){
			for(int i = gap; i < size; i++){
				int temp = arr[i];
				int j;
            for (j = i; j >= gap and arr[j - gap] > temp; j -= gap) 
                arr[j] = arr[j - gap]; 
				arr[j] = temp;
			}
		}
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void ShellSort(Container<T,Allocater>& container){
			int size = container.size();
			for (int gap = size/2; gap > 0; gap /= 2){
			for(int i = gap; i < size; i++){
				int temp = container.at(i);
				int j;
            for (j = i; j >= gap and container.at(j - gap) > temp; j -= gap) 
                container.at(j) = container.at(j - gap); 
				container.at(j) = temp;
			}
		}
	}

	template<typename T>
	void ModifiedInsertionSort(T arr[],int left, int right){
		for (int i = left + 1; i <= right; i++){ 
			int temp = arr[i]; 
			int j = i - 1; 
			while (arr[j] > temp and j >= left){ 
				arr[j+1] = arr[j]; 
				j--; 
			} 
			arr[j+1] = temp; 
		}
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void ModifiedInsertionSort(Container<T,Allocater>& container,int left, int right){
		for (int i = left + 1; i <= right; i++){
			int temp = container[i]; 
			int j = i - 1; 
			while (container[j] > temp and j >= left) { 
				container[j+1] = container[j]; 
				j--; 
			} 
			container[j+1] = temp; 
		}
	}

	template<typename T>
	void TimSort(T arr[],int n){
		const int RUN = 32;
		for (int i = 0; i < n; i+=RUN){ 
			ModifiedInsertionSort(arr, i, std::min((i+31), (n-1))); 
		}
		for (int size = RUN; size < n; size = 2*size){ 
			for (int left = 0; left < n; left += 2*size){ 
				int mid = left + size - 1; 
				int right = std::min((left + 2*size - 1), (n-1)); 

				Merge(arr, left, mid, right); 
			} 
		} 
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void TimSort(Container<T,Allocater>& container){
		const int RUN = 32;
		int n = container.size();

		for (int i = 0; i < n; i+=RUN) {
			ModifiedInsertionSort(container, i, std::min((i+31), (n-1))); 
		}
		for (int size = RUN; size < n; size = 2*size){ 
			for (int left = 0; left < n; left += 2*size) { 
				int mid = left + size - 1; 
				int right = std::min((left + 2*size - 1), (n-1)); 

				Merge(container, left, mid, right); 
			} 
		} 
	}

	template<typename T>
	void CombSort(T arr[],int size){
		int gap = size; 
		bool swapped = true; 	
		while (gap != 1 || swapped == true){ 
			gap = getNextGap(gap); 
			swapped = false; 
			for (int i=0; i<size-gap; i++) { 
				if (arr[i] > arr[i+gap]) { 
					std::swap(arr[i], arr[i+gap]); 
					swapped = true; 
				} 
			} 
		} 
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void CombSort(Container<T,Allocater>& container){
		int gap = container.size();
		int size = container.size(); 
		bool swapped = true; 	
		while (gap != 1 || swapped == true){ 
			gap = getNextGap(gap); 
			swapped = false; 
			for (int i=0; i<size-gap; i++) { 
				if (container[i] > container[i+gap]) { 
					std::swap(container[i], container[i+gap]); 
					swapped = true; 
				} 
			} 
		} 
	}

	template<typename T>
	void PigeonHoleSort(T arr[],int n){ 
		int min = arr[0], max = arr[0]; 
		for (int i = 1; i < n; i++) 
		{ 
			if (arr[i] < min) 
				min = arr[i]; 
			if (arr[i] > max) 
				max = arr[i]; 
		} 
		int range = max - min + 1;
	 
		std::vector<T> holes[range]; 
	
		for (int i = 0; i < n; i++){ 
			holes[arr[i]-min].push_back(arr[i]); 
		}
		int index = 0; 
		for (int i = 0; i < range; i++) { 
			typename std::vector<T>::iterator it; 
			for (it = holes[i].begin(); it != holes[i].end(); ++it){
				arr[index++]  = *it; 
			} 
		}
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void PigeonHoleSort(Container<T,Allocater>& container){
		int min = container[0], max =container[0]; 
		int n = container.size();
		for (int i = 1; i < n; i++) 
		{ 
			if (container[i] < min) 
				min = container[i]; 
			if (container[i] > max) 
				max = container[i]; 
		} 
		int range = max - min + 1;
	 
		std::vector<T> holes[range]; 
	
		for (int i = 0; i < n; i++){ 
			holes[container[i]-min].push_back(container[i]); 
		}
		int index = 0; 
		for (int i = 0; i < range; i++){ 
			typename std::vector<T>::iterator it; 
			for (it = holes[i].begin(); it != holes[i].end(); ++it){ 
				container[index++]  = *it; 
			} 
		}
	}

	template<typename T>
	void CycleSort(T arr[],int size ){
		for (int cycle_start = 0; cycle_start <= size - 2; cycle_start++) { 
			T item = arr[cycle_start]; 
	
			int pos = cycle_start; 
			for (int i = cycle_start + 1; i < size; i++) 
				if (arr[i] < item){ 
					pos++; 
				}
			if (pos == cycle_start){ 
				continue; 
			}
	
			while (item == arr[pos]) {
				pos += 1; 
			}
	
			if (pos != cycle_start) { 
				swap(&item, &arr[pos]); 
			} 
	
			while (pos != cycle_start) { 
				pos = cycle_start; 
				for (int i = cycle_start + 1; i < size; i++) 
					if (arr[i] < item){ 
						pos += 1; 
					}

				while (item == arr[pos]){ 
					pos += 1; 
				}
	
				if (item != arr[pos]) { 
					swap(&item, &arr[pos]); 
				} 
			} 
		} 
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void CycleSort(Container<T,Allocater>& container){
		int size = container.size();
		for (int cycle_start = 0; cycle_start <= size - 2; cycle_start++) { 
			T item = container[cycle_start]; 
	
			int pos = cycle_start; 
			for (int i = cycle_start + 1; i < size; i++) 
				if (container[i] < item){ 
					pos++; 
				}
			if (pos == cycle_start){ 
				continue; 
			}
	
			while (item == container[pos]) {
				pos += 1; 
			}
	
			if (pos != cycle_start) { 
				swap(&item, &container[pos]); 
			} 
	
			while (pos != cycle_start) { 
				pos = cycle_start; 
				for (int i = cycle_start + 1; i < size; i++) 
					if (container[i] < item){ 
						pos += 1; 
					}

				while (item == container[pos]){ 
					pos += 1; 
				}
	
				if (item != container[pos]) { 
					swap(&item, &container[pos]); 
				} 
			} 
		} 
	}

	template<typename T>
	void CocktailSort(T arr[],int size){
		bool swapped = true; 
		int start = 0; 
		int end = size - 1; 

		while (swapped) { 
			swapped = false; 
			for (int i = start; i < end; ++i) { 
				if (arr[i] > arr[i + 1]) { 
					swap(&arr[i], &arr[i + 1]); 
					swapped = true; 
				} 
			} 

			if (!swapped){ 
				break; 
			}


			swapped = false; 

			--end; 

			for (int i = end - 1; i >= start; --i) { 
				if (arr[i] > arr[i + 1]) { 
					swap(&arr[i], &arr[i + 1]); 
					swapped = true; 
				} 
			} 
			++start; 
		} 
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void CocktailSort(Container<T,Allocater>& container){
		bool swapped = true; 
		int start = 0; 
		int end = container.size() - 1; 

		while (swapped) { 
			swapped = false; 
			for (int i = start; i < end; ++i) { 
				if (container[i] > container[i + 1]) { 
					swap(&container[i], &container[i + 1]); 
					swapped = true; 
				} 
			} 

			if (!swapped){ 
				break; 
			}


			swapped = false; 

			--end; 

			for (int i = end - 1; i >= start; --i) { 
				if (container[i] > container[i + 1]) { 
					swap(&container[i], &container[i + 1]); 
					swapped = true; 
				} 
			} 
			++start; 
		} 
	}

	template<typename T>
	void InnerCall(T arr[],int low, int size, int dir){
		if (size>1) { 
			int k = size/2; 
			InnerCall(arr, low, k, 1); 
			InnerCall(arr, low+k, k, 0); 
			BitonicMerge(arr,low, size, dir); 
		} 
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void InnerCall(Container<T,Allocater>& container,int low, int size,int dir){
		if (size>1) { 
			int k = size/2; 
			InnerCall(container, low, k, 1); 
			InnerCall(container, low+k, k, 0); 
			BitonicMerge(container,low,size, dir); 
		} 	
	}

	template<typename T>
	void compAndSwap(T arr[], int i, int j, int dir){
		if (dir==(arr[i]>arr[j])){ 
			swap(&arr[i],&arr[j]);
		} 
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void compAndSwap(Container<T,Allocater>& container, int i, int j, int dir){
		if (dir==(container[i]>container[j])){ 
        	swap(&container[i],&container[j]); 
		}
	}

	template<typename T>
	void BitonicMerge(T arr[], int low, int size, int dir){
		if (size>1){ 
			int k = size/2; 
			for (int i=low; i<low+k; i++){
				compAndSwap(arr, i, i+k, dir);
			} 
			BitonicMerge(arr, low, k, dir); 
			BitonicMerge(arr, low+k, k, dir); 
		} 
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void BitonicMerge(Container<T,Allocater>& container, int low, int size, int dir){
		if (size>1){ 
			int k = size/2; 
			for (int i=low; i<low+k; i++){
				compAndSwap(container, i, i+k, dir);
			} 
			BitonicMerge(container, low, k, dir); 
			BitonicMerge(container, low+k, k, dir); 
		} 
	}	

	template<typename T>
	void BitonicSort(T arr[],int size, int direction){
		InnerCall(arr,0,size,direction);
	}
	template<template<class,class> class Container, class Allocater, typename T>
	void BitonicSort(Container<T,Allocater>& container, int direction){
		InnerCall(container,0,container.size(),direction);
	}

	template<typename T>
	void PancakeSort(T arr[],int size){
		for (int curr_size = size; curr_size > 1; --curr_size) { 
			int mi = FindMax(arr, curr_size); 		
	
			if (mi != curr_size-1) { 
				Flip(arr, mi); 
				Flip(arr, curr_size-1); 
			} 
		} 
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void PancakeSort(Container<T,Allocater>& container){
		for (int curr_size = container.size(); curr_size > 1; --curr_size) { 
			int mi = FindMax(container, curr_size); 		
	
			if (mi != curr_size-1) { 
				Flip(container, mi); 
				Flip(container, curr_size-1); 
			} 
		} 
	}

	template<typename T>
	void Flip(T arr[],int index){
		int temp, start = 0; 
		while (start < index) { 
			temp = arr[start]; 
			arr[start] = arr[index]; 
			arr[index] = temp; 
			start++; 
			index--; 
		} 
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void Flip(Container<T,Allocater>& container, int index){
		int temp, start = 0; 
		while (start < index) { 
			temp = container[start]; 
			container[start] = container[index]; 
			container[index] = temp; 
			start++; 
			index--; 
		} 
	}

	template<typename T>
	int FindMax(T arr[],int size){
		int mi, i; 
		for (mi = 0, i = 0; i < size; ++i){
			if (arr[i] > arr[mi]){ 
				mi = i; 
			}
		}
		return mi; 		
	}

	template<template<class,class> class Container, class Allocater, typename T>
	int FindMax(Container<T,Allocater>& container, int size){
		int mi, i; 
		for (mi = 0, i = 0; i < size; ++i){
			if (container[i] > container[mi]){ 
				mi = i; 
			}
		}
		return mi; 
	}

	template<typename T>
	void GnomeSort(T arr[],int n){
		int index = 0; 
	
		while (index < n) { 
			if (index == 0) 
				index++; 
			if (arr[index] >= arr[index - 1]) 
				index++; 
			else { 
				swap(&arr[index], &arr[index - 1]); 
				index--; 
			} 
		} 
		return; 		
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void GnomeSort(Container<T,Allocater>& container){
		int index = 0; 
	
		while (index < container.size()) { 
			if (index == 0) 
				index++; 
			if (container[index] >= container[index - 1]) 
				index++; 
			else { 
				swap(&container[index], &container[index - 1]); 
				index--; 
			} 
		} 
		return; 
	}

	template<typename T>
	void BinaryInsertionSort(T arr[],int size){
		int i, loc, j, selected; 
	
		for (i = 1; i < size; ++i) { 
			j = i - 1; 
			selected = arr[i]; 
	
			// find location where selected sould be inseretd 
			loc = BinarySearchUsedInBIsort(arr, selected, 0, j); 
	
			// Move all elements after location to create space 
			while (j >= loc) 
			{ 
				arr[j+1] = arr[j]; 
				j--; 
			} 

			arr[j+1] = selected; 
		} 
	}

	template<template<class,class> class Container, class Allocater, typename T>
	void BinaryInsertionSort(Container<T,Allocater>& container){
		int i, loc, j, selected; 
	
		for (i = 1; i < container.size(); ++i) { 
			j = i - 1; 
			selected = container[i]; 
	
			// find location where selected sould be inseretd 
			loc = BinarySearchUsedInBIsort(container, selected, 0, j); 
	
			// Move all elements after location to create space 
			while (j >= loc) 
			{ 
				container[j+1] = container[j]; 
				j--; 
			} 

			container[j+1] = selected; 
		} 
	}

	template<typename T>
	int BinarySearchUsedInBIsort(T arr[], int item, int low, int high){
		if (high <= low) 
			return (item > arr[low])?  (low + 1): low; 
	
		int mid = (low + high)/2; 
	
		if(item == arr[mid]) 
			return mid+1; 
	
		if(item > arr[mid]){ 
			return BinarySearchUsedInBIsort(arr, item, mid+1, high);
		} 
		return BinarySearchUsedInBIsort(arr, item, low, mid-1); 
	}

	template<template<class,class> class Container, class Allocater, typename T>
	int BinarySearchUsedInBIsort(Container<T,Allocater>& container, int item, int low, int high){
		if (high <= low) 
			return (item > container[low])?  (low + 1): low; 
	
		int mid = (low + high)/2; 
	
		if(item == container[mid]) 
			return mid+1; 
	
		if(item > container[mid]){ 
			return BinarySearchUsedInBIsort(container, item, mid+1, high);
		} 
		return BinarySearchUsedInBIsort(container, item, low, mid-1); 
	}
}
