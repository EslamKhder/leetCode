#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    
    int move = 0;
    
    for (int i=0;i<nums.size();i++) {
    	
    	if (nums[i] != 0){
    		nums[move] = nums[i];
    		move++;
		}
	}
	for (int i=move;i<nums.size();i++) { // i = 3 4     i<5
		nums[i] = 0;
	}
	
	return nums;
}
int main(){
	
}
