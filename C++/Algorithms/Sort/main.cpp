#include <iostream>
#include <vector>
#include "SortAlgorithms.hpp"


int main(){
	const int size = 10;
	int arr[size] = {52,11,36,85,99,45,12,2,4,77};
	std::vector<int> nums = {52,11,36,85,99,45,12,2,4,77};
	char Characters[size] = {'b','e','a','y','u','A','a','/','!','z'};
	std::vector<char> Characters_Vector= {'b','e','a','y','u','A','a','/','!','z'};
	//SortAlgorithms::SelectionSort(arr,size);
	//SortAlgorithms::SelectionSort(nums);

	//SortAlgorithms::BubbleSort(arr,size);
	//SortAlgorithms::BubbleSort(nums);

	//SortAlgorithms::InsertionSort(arr,size);
	//SortAlgorithms::InsertionSort(nums);
	//SortAlgorithms::InsertionSort(Characters,size);
	//SortAlgorithms::InsertionSort(Characters_Vector);

	//SortAlgorithms::MergeSort(arr,0,size - 1);
	//SortAlgorithms::MergeSort(nums,0,nums.size() - 1);
	//SortAlgorithms::MergeSort(Characters,0,size - 1);
	//SortAlgorithms::MergeSort(Characters_Vector,0,nums.size() - 1);

	//SortAlgorithms::QuickSort(arr,0, size - 1);
	//SortAlgorithms::QuickSort(nums,0,nums.size() - 1);
	//SortAlgorithms::QuickSort(Characters,0, size - 1);
	//SortAlgorithms::QuickSort(Characters_Vector,0,Characters_Vector.size() - 1);

	//SortAlgorithms::HeapSort(arr,size);
	//SortAlgorithms::HeapSort(nums);
	//SortAlgorithms::HeapSort(Characters,size);
	//SortAlgorithms::HeapSort(Characters_Vector);

	//SortAlgorithms::CountSort(arr,size);
	//SortAlgorithms::CountSort(nums);
	//SortAlgorithms::CountSort(Characters,size);
	//SortAlgorithms::CountSort(Characters_Vector);

	SortAlgorithms::RadixSort(arr,size);
	SortAlgorithms::RadixSort(nums);
	SortAlgorithms::RadixSort(Characters,size);
	SortAlgorithms::RadixSort(Characters_Vector);

	for(const auto& ele : arr){
		std::cout << ele << " ";
	}

	std::cout << "\nSTL Container\n";

	for(const auto& ele : nums){
		std::cout << ele << " ";
	}
	std::cout << "\n";

	for(const auto& ele : Characters){
		std::cout << ele << " ";
	}

	std::cout << "\nSTL Container\n";

	for(const auto& ele : Characters_Vector){
		std::cout << ele << " ";
	}
}

