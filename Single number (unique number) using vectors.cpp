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

