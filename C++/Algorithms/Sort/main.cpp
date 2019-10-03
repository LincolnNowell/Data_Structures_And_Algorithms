#include <iostream>
#include <vector>
#include "SortAlgorithms.hpp"


int main(){
	const int size = 10;
	int arr[size] = {52,11,36,85,99,45,12,2,4,77};
	std::vector<int> nums = {52,11,36,85,99,45,12,2,4,77};
	//SortAlgorithms::SelectionSort(arr,size);
	//SortAlgorithms::SelectionSort(nums);

	SortAlgorithms::BubbleSort(arr,size);
	SortAlgorithms::BubbleSort(nums);
	for(const auto& ele : arr){
		std::cout << ele << "\n";
	}

	std::cout << "STL Container\n";

	for(const auto& ele : nums){
		std::cout << ele << "\n";
	}
}

