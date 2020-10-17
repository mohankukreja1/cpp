//count no of bits
#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;		//no read :)
	int cnt = 0;
	while (N != 0){
		int rem = N % 2;
		if (rem == 1)	++cnt;
		N /= 2;		//no reduced to half. 
	}
	cout << "No of bits are " << cnt << endl;
	return 0;
}