#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node *next;	
};
int e;
node *creatNode(int x){
	node *p = new node;
	p->data =x;
	p->next = NULL;
	return p;
}

node *addElement(int x, node *p){
	node *tmp = creatNode(x);
	p->next = tmp;
	return tmp;
}
node *deleteHead(node *l){
	l = l->next;
	return l;
}
node *deleteDuoi(node *l){
	node *p = l;
	while(p->next->next!=NULL){
		p =p->next;
	}
	p ->next = NULL;
	return l;
}
node *deleteAt(node *l, int k){
	node *p = l;
	for(int i =0; i <k-1; i++){
		p = p->next;
	}
	p->next = p->next->next;
	return l;
}
int main(){
	int n;
	cin >> n;
	int x; cin >> x;
	node *l = creatNode(x);
	node *p = l;
	for(int i = 1; i < n; i++){
		cin >> x;
		p = addElement(x,p);
	}
	cin >> e;
//	l = deleteHead(l);
//	l = deleteDuoi(l);
	node *tmp = l;
//	l= deleteAt(l,3);
	vector<int> pos;
	for(int i = 0; i < n; i++){
		if(tmp->data == e){
			pos.push_back(i);
		}
		tmp = tmp ->next;
	}
	for(int x = 0;x< pos.size(); x++){
		if(pos[x]==0){
			l = deleteHead(l);
		}
		else if(pos[x]==n-1){
			l = deleteDuoi(l);
		}
		else{
			l = deleteAt(l,pos[x]);
		}
		for(int i = x+1; i < pos.size(); i++){
			pos[i]--;
		}
	}
	while(l!=NULL){
		cout << l->data <<" ";
		l=l->next;
	}
}