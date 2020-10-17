#include "stack2.h"
#include <iostream>
using namespace std;
int main(){
	int arrList[] = {1,2,4};
	myStack A(arrList, 3, 100);
	
	// myStack B(A);	//copy ctor
	// B = A;	//assignment 
	
	myStack B(10); 
	cout << A.pop();
	cout << B.getSize();

	
}