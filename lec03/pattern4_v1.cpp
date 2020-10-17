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
		
		int totalChar = 2 * (N + 1 - curL);
		
		char val = 'A';
		bool isInc = true;
		for(int ch = 1; ch <= totalChar; ++ch){
			cout << val;
			
			//flag situation encountered. --Tasks to do are as follows
			if (ch == totalChar / 2) {	
				isInc = false;
				cout << val;
				++ch;
			}

			//value needs to be updated
			if (isInc == true)	++val;
			else --val;
		}
		cout << "\n";	//print enter
	}
	return 0;
}