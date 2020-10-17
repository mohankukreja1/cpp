#include <iostream>
using namespace std;

int main(){
	int N, prec;
	cin >> N >> prec;
	double rt = 1;
	double inc = 1;
	int curPrec = 0;
	while(curPrec <= prec){
		while (rt * rt <= N){
			rt = rt + inc;
		}
		rt = rt - inc;
		inc = inc / 10;
		// curPrec = curPrec + 1;
		++curPrec;
	}
	cout << rt;
	return 0;
}