/*Unique Element Finder
A C++ program that identifies and displays all elements in a vector that appear exactly once (have no duplicates).

Features
1. Works with integer vectors of any size
2. Removes duplicate occurrences while traversing
3. Identifies all unique elements that appear only once
4. Uses STL vector for dynamic memory management

How It Works
1. The program uses a nested loop approach with an intelligent removal strategy:
2. Outer Loop: Iterates through each element in the vector, assuming it might be unique.
3. Inner Loop: Searches for duplicates of the current element in the remaining vector positions.
4. Duplicate Removal: When a duplicate is found, it's erased from the vector, and the inner loop index decrements to account for the shift.
5. Unique Detection: If no duplicates are found for an element (isbool remains true), it's displayed as unique and remains in the vector.

Usage
Input: {1, 2, 2, 3, 1, 2}
Output: Unique : 3
Input: {1, 2, 2, 3, 1, 2, 4}
Output: 
Unique : 3
Unique : 4
Example Breakdown
1 appears twice → both instances removed
2 appears three times → all instances removed
3 appears once → displayed as unique
4 appears once → displayed as unique

Code Logic
1. Boolean Flag: isbool tracks whether current element has any duplicates
2. Vector Erasure: nums.erase(nums.begin()+b) removes duplicate elements
3. Index Adjustment: b-- compensates for vector size reduction after erasure
4. Continues Checking: Outputs each unique element found and continues the loop*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> nums = {1,2,2,3,1,2};
	bool isbool;
	for(int a=0 ; a<nums.size(); a++){
		isbool = true;
		for(int b=a+1 ; b<nums.size() ; b++){
			if(nums[a]==nums[b]){
				nums.erase(nums.begin()+b);
				isbool = false;
				b--;
			}
		}
		if(isbool){
			cout<<"Unique : "<<nums[a];
		}
	}
return 0;

}


