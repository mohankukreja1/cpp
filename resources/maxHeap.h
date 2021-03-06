#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class heap{
	vector<int> v;
	int size;
	int parent(int i){ return i >> 1;}
	int left(int i){ return i << 1;}	//same as 2 * i
	int right(int i){ return (i << 1) + 1; }


	void heapify(int i){
			int smallest = i;
			if(left(i) <= size && v[left(i)] > v[smallest]){
				smallest = left(i);
			}
			if(right(i) <= size && v[right(i)] > v[smallest]){
				smallest = right(i);
			}
			if (smallest != i){
				swap(v[smallest], v[i]);
				heapify(smallest);
			}
	}

public:
	heap(){
		v.push_back(-1);
		size = 0;
	}

	int getMin(){
		if(size != 0) return v[1];
	}

	void push(int d){
		v.push_back(d);
		++size;
		// while parent exits and I am smaller than my parent
		// I will become parent....swap :)

		int i = size;
		while(parent(i) >= 1 && v[parent(i)] < v[i]){
			swap(v[parent(i)], v[i]);
			i = parent(i);
		}
	}

	void pop(){
		if(size == 0) return ;
		swap(v[1], v[size]);
		v.pop_back();
		--size;
		heapify(1);
	}

	bool isEmpty(){
		return size == 0;
	}
};

int main(){
	int T, x;
	heap H;
	cin >> T;
	for(int i = 0; i < T; ++i){
		cin >> x;
		H.push(x);
	}

	int q;
	cin >> q;
	for(int i = 0; i < q; ++i){
		int ch; cin >> ch;
		if (ch == 1){
			cin >> x;
			H.push(x);
		}
		else {
			cout << H.getMin() << "\n";
			H.pop();
		}
	}
}