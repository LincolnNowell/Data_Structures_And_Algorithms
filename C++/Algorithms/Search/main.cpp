/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  9/29/2019 10:47:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include "SearchAlgorithms.hpp"

int main(){
	int arr[5] = {1,2,3,4,5};
	std::vector<int> nums = {1,2,3,4,5};
	std::cout << SearchAlgorithms::LinearSearch(arr,5,3) << "\n";
	std::cout << SearchAlgorithms::LinearSearch(nums,2) << "\n";

	std::cout << SearchAlgorithms::BinarySearch(arr,5,1) << "\n";
	std::cout << SearchAlgorithms::BinarySearch(nums,5) << "\n";

	int arr2[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	std::vector<int> nums2 = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

	std::cout << SearchAlgorithms::JumpSearch(arr2,16,12) << "\n";
	std::cout << SearchAlgorithms::JumpSearch(nums2,9) << "\n";

	std::cout << SearchAlgorithms::InterpolationSearch(arr2,16,15) << "\n";
	std::cout << SearchAlgorithms::InterpolationSearch(nums2,7) << "\n";

	std::cout << SearchAlgorithms::ExponentialSearch(arr2,16,5) << "\n";
	std::cout << SearchAlgorithms::ExponentialSearch(nums2,1) << "\n";

	std::cout << SearchAlgorithms::FibonacciSearch(arr2,16,4) << "\n";
	std::cout << SearchAlgorithms::FibonacciSearch(nums2,8) << "\n";

}


