/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include <iostream>
using namespace std;
int main(){
	int nLines;	cin >> nLines;

	for(int curL = 1; curL <= nLines; ++curL){
		int val;
		if (curL % 2 == 0) val = 0;
		else val = 1;

		for(int ch = 1; ch <= curL; ++ch){
			cout << val;
			val = 1 - val;
		}
		cout << endl;
	}

	return 0;

}