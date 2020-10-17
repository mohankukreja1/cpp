#include <map>
#include <iostream>
using namespace std;

int main(){
	map<string, int> m;
	m["abc"] = 2;
	// m.insert("abc", 2); //wrong!!

	m.insert(make_pair("ghi", 3));

	// cout << m["abc"];
	cout << m["def"];
	int * pr = 0;
	delete pr;


}

