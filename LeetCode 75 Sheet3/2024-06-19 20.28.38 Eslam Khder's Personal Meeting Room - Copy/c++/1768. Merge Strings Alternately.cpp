#include<iostream>
using namespace std;
                      
string mergeAlternately(string word1, string word2) {
    int sizeWord1 = word1.size();  // 1
    int sizeWord2 = word2.size(); // 3
    
    string result = ""; // "af"
    
    int w1 = 0;
    int w2 = 0;
    //     0         012
    //     a         fnm
    while(w1 < sizeWord1 || w2 < sizeWord2){
    	// w1 = 1     w2 = 1
    	if (w1 < sizeWord1){
    		result.push_back(word1[w1]);
    		w1++;
		}
		
		if (w2 < sizeWord2){
    		result.push_back(word2[w2]);
    		w2++;
		}
	}
	
	return result;
}
int main(){
	
}
