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
