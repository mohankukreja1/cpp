#include <iostream>		//standard header
using namespace std;
int main(){
	//read P R T
	int P;
	int R;
	int T;	//variable declartation
	// cout << "P R T\n";
	cin >> P; 	cin >> R; 	cin >> T;
	int si = P * R * T / 100;
	cout<<si;
	return 0;
}