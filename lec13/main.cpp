#include <iostream>
#include "myComplex.h"
using namespace std;
int main(){
	myComplex A(2,3.3);
	myComplex B(5.1);
	myComplex C;
	C = A + B;
	cout << A << B;

	// cout << 2 << 3 << 4;

}