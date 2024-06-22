#include<iostream>
#include<map>
using namespace std;
//     e
//   s  
//  01234567
// "abcabcbb"
int lengthOfLongestSubstring(string s) {
	
	map<char, int> map;
	// a = 0
	// b = 1
	// c = 2
	int start = 0;
	int maxSize = 0; // 3
	for(int end = 0;end<s.size();end++){ // 0 1 2 3
		char c = s[end]; // a
		
		if (map.find(c) != map.end() && map[c] >= start){
			start = map[c] + 1;
		}
		maxSize = max(maxSize, end - start + 1);
		map[c] = end;
	}
	
	return maxSize;
}
int main(){
	
}
