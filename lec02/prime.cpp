#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;	//read N

	bool isPrime = true;

	int i = 2;	//initialisation
	while(i < N){
		//check for primeness
		if (N % i == 0){
			cout << N << " is not prime\n";
			isPrime = false;
			// return 0;
			break;
		}
		i = i + 1;
	}
	if (isPrime == true){
		cout << N << " is prime\n";
	}
	return 0;
}