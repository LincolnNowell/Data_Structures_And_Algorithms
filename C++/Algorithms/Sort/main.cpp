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

	//SortAlgorithms::RadixSort(arr,size);
	//SortAlgorithms::RadixSort(nums);
	//SortAlgorithms::RadixSort(Characters,size);
	//SortAlgorithms::RadixSort(Characters_Vector);

	//SortAlgorithms::ShellSort(arr,size);
	//SortAlgorithms::ShellSort(nums);
	//SortAlgorithms::ShellSort(Characters,size);
	//SortAlgorithms::ShellSort(Characters_Vector);

	//SortAlgorithms::TimSort(arr,size);
	//SortAlgorithms::TimSort(nums);
	//SortAlgorithms::TimSort(Characters,size);
	//SortAlgorithms::TimSort(Characters_Vector);

	//SortAlgorithms::CombSort(arr,size);
	//SortAlgorithms::CombSort(nums);
	//SortAlgorithms::CombSort(Characters,size);
	//SortAlgorithms::CombSort(Characters_Vector);

	//SortAlgorithms::PigeonHoleSort(arr,size);
	//SortAlgorithms::PigeonHoleSort(nums);
	//SortAlgorithms::PigeonHoleSort(Characters,size);
	//SortAlgorithms::PigeonHoleSort(Characters_Vector);

	//SortAlgorithms::CycleSort(arr,size);
	//SortAlgorithms::CycleSort(nums);
	//SortAlgorithms::CycleSort(Characters,size);
	//SortAlgorithms::CycleSort(Characters_Vector);

	//SortAlgorithms::CocktailSort(arr,size);
	//SortAlgorithms::CocktailSort(nums);
	//SortAlgorithms::CocktailSort(Characters,size);
	//SortAlgorithms::CocktailSort(Characters_Vector);

/*
	bitonic sort only works if the size is a power of 2

	This is the test case for it

	// 0 for descinding, 1 for ascending
	int asc = 1, desc = 0;

	const int size2 = 8;
	int arr2[size2] = {52,11,36,85,99,45,12,2};
	std::vector<int> nums2 = {52,11,36,85,99,45,12,2};
	char Characters2[size2] = {'b','e','a','y','u','A','a','/'};
	std::vector<char> Characters_Vector2= {'b','e','a','y','u','A','a','/'};

	SortAlgorithms::BitonicSort(arr2,size2,1);
	SortAlgorithms::BitonicSort(nums2,1);
	SortAlgorithms::BitonicSort(Characters2,size2,1);
	SortAlgorithms::BitonicSort(Characters_Vector2,1);


	for(const auto& ele : arr2){
		std::cout << ele << " ";
	}

	std::cout << "\nSTL Container\n";

	for(const auto& ele : nums2){
		std::cout << ele << " ";
	}
	std::cout << "\n";

	for(const auto& ele : Characters2){
		std::cout << ele << " ";
	}

	std::cout << "\nSTL Container\n";

	for(const auto& ele : Characters_Vector2){
		std::cout << ele << " ";
	}
	*/

	//SortAlgorithms::PancakeSort(arr,size);
	//SortAlgorithms::PancakeSort(nums);
	//SortAlgorithms::PancakeSort(Characters,size);
	//SortAlgorithms::PancakeSort(Characters_Vector);

	//SortAlgorithms::GnomeSort(arr,size);
	//SortAlgorithms::GnomeSort(nums);
	//SortAlgorithms::GnomeSort(Characters,size);
	//SortAlgorithms::GnomeSort(Characters_Vector);

	SortAlgorithms::BinaryInsertionSort(arr,size);
	SortAlgorithms::BinaryInsertionSort(nums);
	SortAlgorithms::BinaryInsertionSort(Characters,size);
	SortAlgorithms::BinaryInsertionSort(Characters_Vector);

	
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

