/*
 * =====================================================================================
 *
 *       Filename:  SearchAlgoritms.hpp
 *
 *    Description:  Class For Storing Searching Algorithms
 *
 *        Version:  1.0
 *        Created:  9/29/2019 10:35:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: Lincoln Nowell
 *   Organization:  
 * 
 * 	 Sources: GeeksforGeeks.com, 
 *            Starting Out With C++ Early Objects 8th edition
 *
 * =====================================================================================
 */

#pragma
#include <math.h>
#include <algorithm> // min function

class SearchAlgorithms{
public:
	template<typename T>
	static int LinearSearch(T arr[], int size, T value);
	template<template<class,class> class containers, typename T, typename Allocater>
	static int LinearSearch(containers<T,Allocater>&, T);

	template<typename T>
	static int BinarySearch(T arr[], int size, T value);
	template<template<class,class> class containers, typename T, typename Allocater>
	static int BinarySearch(containers<T,Allocater>&, T);

	template<typename T>
	static int JumpSearch(T arr[], int size, T value);
	template<template<class,class> class containers, typename T, typename Allocater>
	static int JumpSearch(containers<T,Allocater>&, T);

	template<typename T>
	static int InterpolationSearch(T arr[], int size, T value);
	template<template<class,class> class containers, typename T, typename Allocater>
	static int InterpolationSearch(containers<T,Allocater>&, T);

	template<typename T>
	static int ExponentialSearch(T arr[], int size, T value);
	template<template<class,class> class containers, typename T, typename Allocater>
	static int ExponentialSearch(containers<T,Allocater>&, T);

private:
	template<typename T>
	static int RecursiveBinarySearch(T arr[], int left, int right, T value);
	template<template<class,class> class containers, typename T, typename Allocater>
	static int RecursiveBinarySearch(containers<T,Allocater>& container, int left, int right, T value);
};

//Works with Plain Arrays
template<typename T>
int SearchAlgorithms::LinearSearch(T arr[],int size, T value){
	for(size_t index = 0; index < size; index++){
		if(arr[index] == value){
			return index;
		}
	}
	return -1;
}

//Works with STL Containers
template<template<class,class> class containers, typename T, typename Allocater>
int SearchAlgorithms::LinearSearch(containers<T,Allocater>& container, T value){
	int index = 0;
	for (auto& element : container){
		if(element == value){
			return index;
		}
		index++;
	}
	return -1;
}

//Works with Plain Arrays
template<typename T>
int SearchAlgorithms::BinarySearch(T arr[],int size, T value){
	int first = 0, last = size - 1, middle = 0, position = -1;

	while (first <= last)
	{
		middle = (first + last) / 2;
		if(arr[middle] == value){
			return middle;
		}
		else if(arr[middle] > value){
			last = middle - 1;
		}
		else{
			first = middle + 1;
		}
	}
	return -1;
}

//Works with STL Containers
template<template<class,class> class containers, typename T, typename Allocater>
int SearchAlgorithms::BinarySearch(containers<T,Allocater>& container, T value){
	int first = 0, last = container.size() - 1, middle = 0, position = -1;

	while (first <= last)
	{
		middle = (first + last) / 2;
		if(container[middle] == value){
			return middle;
		}
		else if(container[middle] > value){
			last = middle - 1;
		}
		else{
			first = middle + 1;
		}
	}
	return -1;
}

template<typename T>
int SearchAlgorithms::JumpSearch(T arr[],int size, T value){
	int step = std::sqrt(size);

	int prev = 0;
	while (arr[std::min(step,size) - 1] < value){
		prev = step;
		step += std::sqrt(size);
		if(prev >= size){
			return -1;
		}
	}

	while(arr[prev] < value){
		prev++;

		if(prev == std::min(step,size)){
			return -1;
		}
	}

	if(arr[prev] == value){
		return prev;
	}

	return -1;
	
}

template<template<class,class> class containers, typename T, typename Allocater>
int SearchAlgorithms::JumpSearch(containers<T,Allocater>& container, T value){
	int size = container.size();
	int step = std::sqrt(size);

	int prev = 0;
	while (container[std::min(step,size) - 1] < value){
		prev = step;
		step += std::sqrt(size);
		if(prev >= size){
			return -1;
		}
	}

	while(container[prev] < value){
		prev++;

		if(prev == std::min(step,size)){
			return -1;
		}
	}

	if(container[prev] == value){
		return prev;
	}

	return -1;
}

template<typename T>
int SearchAlgorithms::InterpolationSearch(T arr[],int size, T value){
	int low = 0, high = (size - 1);

	while (low <= high and value >= arr[low] and value <= arr[high]){
		if(low == high){
			if(arr[low] == value){
				return low;
			}
			return -1;
		}

		int position = low + ((static_cast<double>(high - low) 
		/ (arr[high] - arr[low])) * (value - arr[low]));

		if(arr[position] == value){
			return position;
		}

		if(arr[position] < value){
			low = position + 1;
		}

		else{
			high = position - 1;
		}
	}

	return -1;
	
}

template<template<class,class> class containers, typename T, typename Allocater>
int SearchAlgorithms::InterpolationSearch(containers<T,Allocater>& container, T value){
	int low = 0, high = (container.size() - 1);

	while (low <= high and value >= container[low] and value <= container[high]){
		if(low == high){
			if(container[low] == value){
				return low;
			}
			return -1;
		}

		int position = low + ((static_cast<double>(high - low) 
		/ (container[high] - container[low])) * (value - container[low]));

		if(container[position] == value){
			return position;
		}

		if(container[position] < value){
			low = position + 1;
		}

		else{
			high = position - 1;
		}
	}

	return -1;	
}

template<typename T>
int SearchAlgorithms::RecursiveBinarySearch(T arr[], int left, int right, T value){
	if(right >= left){
		int middle = left + (right - left)/2;

		if(arr[middle] == value){
			return middle;
		}

		if(arr[middle] > value){
			return RecursiveBinarySearch(arr,left,right - 1,value);
		}

		return RecursiveBinarySearch(arr,middle+1,right,value);
	}
	return -1;
}

template<template<class,class> class containers, typename T, typename Allocater>
int SearchAlgorithms::RecursiveBinarySearch(containers<T,Allocater>& container, int left, int right, T value){
	if(right >= left){
		int middle = left + (right - left)/2;

		if(container[middle] == value){
			return middle;
		}

		if(container[middle] > value){
			return RecursiveBinarySearch(container,left,right - 1,value);
		}

		return RecursiveBinarySearch(container,middle+1,right,value);
	}
	return -1;
}

template<typename T>
int SearchAlgorithms::ExponentialSearch(T arr[],int size, T value){
	if(arr[0] == value){
		return 0;
	}

	int i = 1;
	while (i < size and arr[i] <= value){
		i *= 2;
	}
	
	return RecursiveBinarySearch(arr,i/2,std::min(i,size),value);
}

template<template<class,class> class containers, typename T, typename Allocater>
int SearchAlgorithms::ExponentialSearch(containers<T,Allocater>& container, T value){
	if(container[0] == value){
		return 0;
	}

	int i = 1;
	while (i < container.size() and container[i] <= value){
		i *= 2;
	}
	int size = container.size();
	return RecursiveBinarySearch(container,i/2,std::min(i,size),value);
}