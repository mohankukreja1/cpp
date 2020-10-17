/*
	 1
    232
   34543
  4567654
 567898765
 */
#include <iostream>
using namespace std;
int main(){
	int nLines;	cin >> nLines;

	int curL = 1;
	while(curL <= nLines){
		//print a line

		//print a space
		int curSp = 1;
		while (curSp <= nLines - curL){
			cout << " ";
			++curSp;
		}

		//print chars
		int nChar = 2 * curL - 1;
		int curChar = 1;
		int val = curL;
		bool isInc = true;
		
		while (curChar <= nChar){
			//print a val
			cout << val << "";
			curChar++;
			//value update!
			if (val == 2 * curL - 1) {
				isInc = false;
			}
			if (isInc == true) ++val;
			else --val;
		}
		cout <<endl;
		++curL;
	}
	return 0;
}