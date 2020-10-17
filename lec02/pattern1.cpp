/*
1
23
456
78910
*/
#include <iostream>
using namespace std;

int main(){
	int nLines;
	cin >> nLines;

	int curLine = 1;
	int val = 1;
	while(curLine <= nLines){
		//print a line
		int nChar = 1;
		while(nChar <= curLine){
			//print a char
			cout << val;
			val = val + 1;
			nChar = nChar + 1;
		}
		// cout << "\n";
		cout << endl;
		curLine = curLine + 1;
	}
	return 0;
}