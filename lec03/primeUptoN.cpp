//Print primes upto N
#include <iostream>
using namespace std;

int main(){
	int N;	cin >> N;
	int curN = 2;
	while (curN <= N){
		//check for primess
		int div = 2;
		bool isPrime = true;
		while(div < curN){
			if (curN % div == 0){
				isPrime = false;
				break;
			}
			++div;
		}
		if (isPrime == true){
			cout << curN << " ";		}
		// curN = curN + 1;
		// curN += 1;
		++curN;
		//Above 3 statements are equivalent
	}
	return 0;

}