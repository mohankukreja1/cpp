#include <iostream>
using namespace std ;
int main()
{
	/* code */
	
	int n;
	cin>>n;
	bool isprime=true;
	for(int i=2;i<n;i++){
		if(n%i == 0){
			isprime=false;
		}
	}
	if(isprime== true){
		cout<< "prime";
	}
	else{
		cout<< " not prime";
	}
	return 0;
}