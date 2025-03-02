#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node *next;
};

node *creatNode(int x){
	node *tmp = new node;
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}

node *addElement(int x, node *p){
	node *tmp = creatNode(x);
	p->next = tmp;
	return tmp;
}

int main(){
	int n; cin >>n;
	map<int, int> mp;
	int x; cin >> x;
	mp[x]++;
	node *l = creatNode(x);
	node *p = l;
	
	for(int i = 1;  i<n; i++){
		cin >> x;
		mp[x]++;
		if(mp[x]==1){
			p = addElement(x,p);
		}
	}
	while(l!=NULL){
		cout << l->data <<" ";
		l = l->next;
	}
}