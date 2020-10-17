// /primes upto N using for
#include <iostream>
using namespace std;
int main(){
	int N;
	cin >> N;
	//loop 1 begins
	for (int curNum = 2; curNum <= N; ++curNum){
		//check if curNum is prime. --primeness
		//loop 2 begins
		bool isPrime = true;	//let curNum be prime. --Assumption
		for (int div = 2; div < curNum; ++div){
			if (curNum % div == 0){
				isPrime = false;
				break;
			}
		}
		//here I know whether number is prime or not
		//Imp : the following code is out of loop 2
		if (isPrime == true){
			cout << curNum << " ";
		}
	}
	return 0;
}