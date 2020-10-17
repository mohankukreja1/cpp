#include <iostream>
#include <vector>
#include <map>
#include <utility>
using namespace std;

typedef vector<int> vi;

vector<int> intersectionSorted(const vector<int>& v1, const vector<int>& v2){
	int s1 = v1.size();
	int s2 = v2.size();
	int i1 = 0;
	int i2 = 0;
	vi ans;
	while(i1 < s1 && i2 <s2){
		if (v1[i1] == v2[i2]){
			ans.push_back(v1[i1]);
			i1++;
			i2++;
		}
		else if(v1[i1] > v2[i2]) i2++;
		else i1++;
	}
	return ans;
}

vi intersectionUnsorted(const vi& v1, const vi& v2){
	map<int, int> m;
	for(int i = 0; i < v1.size(); ++i){
		m.insert(make_pair(v1[i], v1[i]));
	}

	vi ans;
	for(int i = 0; i < v2.size(); ++i){
		if (m.find(v2[i]) != m.end()){
			ans.push_back(v2[i]);
		}
	}
	return ans;
}


int main(){
	vector<int> v1 = {4, 2, 1, 9};
	vi v2 = {2,9, 3, 8, 4};

	vi ans = intersectionUnsorted(v1, v2);
	for(int i = 0; i < ans.size(); ++i)	cout << ans[i] << " ";
	cout << endl;
}