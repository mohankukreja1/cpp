#include <iostream>
#include "node.h"
#include "helper.h"
using namespace std;
class pair{
public:
	node * prev;
	node * cur;
};

node * findEle(node * head, int toSearch, node* &pre){	//reference var
	//return the node with the data
	prev = NULL;
	node * cur = head;
	while(cur->data != toSearch){
		prev = cur;
		cur = cur->link;
	}
	return cur;
}



node *  deleteNode(node * head, int ele){
	node * prev = NULL;
	node * toDelete = findEle(head, ele, prev);
	if (prev == NULL && toDelete){
		head =  toDelete->link;
		delete toDelete;
		return head;
	}
	else if(toDelete != NULL){
		prev->link = toDelete->link;
		delete toDelete;
	}
	return head;
}

int main(){
	int n;	cin >> n;
	node * list = createList(n);
	int ele; cin >> ele;
	list = deleteNode(list, ele);
	printList(list);
	return 0;
}
	