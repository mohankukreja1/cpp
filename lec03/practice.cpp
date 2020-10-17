#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int val=i;
		for(int j=1;j<=(n-i);j++){
			cout<<" ";
		}
		for(int j=1;j<=(2*i-1);j++){
			cout<<val;
			if(val<((2*i-1)) && j<=i){
				val++;
			}
			else{
				val--;
			}
		}
		cout<<endl;
	}
	return 0;
}