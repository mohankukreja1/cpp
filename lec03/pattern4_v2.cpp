/*
ABCDEEDCBA
ABCDDCBA
ABCCBA
ABBA
AA
*/
#include <iostream>
using namespace std;
int main(){
	int N;
	cin >> N;
	for (int curL = 1; curL <= N; ++curL){
		//print each row
		
		int nChar = (N + 1 - curL);	
		//nChar refers to characters either on left or right
		char val = 'A';
		
		for(int i = 1; i <= nChar; ++i){
			//This loop prints the left part
			cout << val;
			++val;
		}

		--val;
		for(int i = 1; i <= nChar; ++i){		
			//this loop prints right part
			cout << val--;				//one liner; --hack ;)
		}
		
		cout << "\n";	//print enter
	}
	return 0;
}