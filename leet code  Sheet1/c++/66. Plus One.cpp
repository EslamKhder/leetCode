#include<iostream>
#include<vector>
using namespace std;
//  0 1 2
// [1,2,3]  --->  [1,2,4]
// [1,9,9]  --->  [2,0,0]

//  0 1 2
// [9,9,9]  --->  [1,0,0,0]   -  [1,0,0,0]
vector<int> plusOne(vector<int>& digits) {
    int size = digits.size(); 
	//  0 1 2 3 4
	// [1,2,3,5,3]      3
    for(int i=size-1;i>=0;i--){ // i=2 1 0 -1
    	if (digits[i] != 9) {
    		digits[i]++;
    		return digits;
		}
		digits[i] = 0;
	}
	digits.insert(digits.begin(), 1);
	return digits;
}
int main(){
	vector<int> arr; // [1,2,3]
	arr.push_back(4);
	arr.push_back(3);
	arr.push_back(2);
	arr.push_back(1);
	arr = plusOne(arr); // [1,2,4]     
	
	for(int i=0;i<arr.size();i++){ // i=0 i<3  0 1 2
		cout<<arr[i];
	}
	
}
