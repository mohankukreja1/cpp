//reverse a number
#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int ans = 0;

	while (N != 0){
		int unitDigit = N % 10;
		ans = ans * 10 + unitDigit;
		N /= 10;	//same as N = N / 10
	}

	cout << ans << endl;
	return 0;
}