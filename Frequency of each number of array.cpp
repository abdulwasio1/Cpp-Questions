/*Array Frequency Counter
A C++ program that calculates and displays the frequency of each unique element in an array of integers.

-->Features
1. Accepts 5 integer inputs from the user
2. Sorts the array using bubble sort algorithm
3. Counts and displays the frequency of each unique number
4. Prevents duplicate frequency counts for the same value

-->How It Works
The program operates in three main phases:
1. Input Phase: Prompts the user to enter 5 integers, storing them in an array.
2. Sorting Phase: Implements bubble sort to arrange elements in ascending order, making frequency counting more efficient.
3. Frequency Counting Phase: Iterates through the sorted array, counting occurrences of each unique element while skipping duplicates using a tracking variable.

-->Usage
Enter Number : 5
Enter Number : 2
Enter Number : 5
Enter Number : 8
Enter Number : 2

The Frequency of 2 is 2 times
The Frequency of 5 is 2 times
The Frequency of 8 is 1 times

-->Code Structure
1. Input Loop: Collects user input for array elements
2. Bubble Sort: Nested loops sort the array in ascending order
3. Frequency Counter: Tracks unique elements and their occurrence count
4. Duplicate Prevention: Uses value variable to skip already-counted numbers

Here is the Code....*/

#include <iostream>
#include<climits>
using namespace std;
int main() {
    int size = 5;
    int j;
    int value , count ;
    int array[size];
	for(int a=0 ; a<size ; a++){
		cout<<"Enter Number : ";
		cin>>array[a];
	}
    for(int a=0 ; a<size ; a++){
		for(int b=0 ; b<size-1 ; b++){
			if(array[b]>array[b+1]){
				swap(array[b] , array[b+1]);
			}
		}
	}
    for(int i=0 ; i<size ; i++){
        count = 1;
    if(value!=array[i]){ //idhar i ka value upadate ho chuka ha;
    	for(j=i+1 ; j<size ; j++){
        	if(array[i] == array[j] ){
	                	count++;
	                    value = array[i];
					}
				}
	            cout<<"The Frequency of "<<array[i]<<" is "<<count<<" times "<<endl;
		}
    }
}

