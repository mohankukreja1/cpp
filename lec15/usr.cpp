#include <iostream>
#include "stack.h"
using namespace std;
int main(){
	Stack s(10);
	s.push(2);
	s.push(3);

	cout << s.pop();
	cout << s.pop();
	cout << boolalpha << s.isEmpty();

}