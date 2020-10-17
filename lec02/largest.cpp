#include <iostream>
using namespace std;

int main(){
	int A, B, C;
	// cin >> A;
	// cin >> B;
	// cin >> C;
	cin >> A >> B >> C;
	if (A > B && A > C){
		//print A is largest
		cout << A << " is largest\n";
	}
	else if (B > A && B > C){
		cout << "B is largest\n";
	}
	else {
		cout << "C is largest\n";
	}
	return 0;
}