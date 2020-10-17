#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<n;i++){
		int temp=arr[i];
		int pre=i-1;
		while(pre>=0 & arr[pre]>temp){
			arr[pre+1]=arr[pre];
			pre--;
		}
		arr[pre+1]=temp;
	}
for(int i=0;i<n;i++){
		cout<<arr[i]<< " " ;
	}


	return 0;
}