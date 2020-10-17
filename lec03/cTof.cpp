#include <iostream>
using namespace std;
int main(){
	int initial, final, step;
	cin >> initial >> final >> step;

	while (initial <= final){
		double cel = (5.0 * (initial - 32)) / 9;
		cout << initial << "\t" << cel << endl;
		initial = initial + step;
	}
	return 0;
}