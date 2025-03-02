#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node* l;
	node* r;
};

node *createdNode(int x){
	node* p = new node;
	p->data = x;
	p->l = NULL;
	p->r = NULL;
	return p;
}

node *addNodel(int x,node *p){
	node *tmp = createdNode(x);
	p->l = tmp;
	return tmp;
}

node *addNoder(int x,node *p){
	node *tmp = createdNode(x);
	p->r = tmp;
	return tmp;
}

node *addHeadl(int x,node* p){
	node* tmp = createdNode(x);
	tmp->l = p;
	return tmp;
}
node *addHeadr(int x, node* p){
	node* tmp = createdNode(x);
	tmp->r = p;
	return tmp;
}

node *timkiem(node *p, int x){
	node *tmp = p;
	if(tmp->data == x) return p;
	if(tmp->l!=NULL){
		if(timkiem(tmp->l,x)!=NULL)	
			return timkiem(tmp->l,x);
	}
	if(tmp->r!=NULL){
		if(timkiem(tmp->r,x)!=NULL)
			return timkiem(tmp->r,x);
	}
	return NULL;
}
int ans;
void tong(node *p, char c){
	if(p->l==NULL and p->r==NULL){
//		cout << p->data <<" ";
		if(c=='R') ans += p->data;
		return;
	}
	if(p->l!=NULL){
		tong(p->l,'L');
	}
	if(p->r!=NULL){
		tong(p->r,'R');
	}
}
void in(node *p){
	cout << p->data << " ";
	if(p->l!=NULL) in(p->l);
	if(p->r!=NULL) in(p->r);
}
int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int u,v;
		char x;
		cin >> u >> v >> x;
		node* r = createdNode(u); // root
		node* p = r;
		if(x=='L') p = addNodel(v,p);
		if(x=='R') p = addNoder(v,p);
		n--;
		for(int i = 0; i<n; i++){
			cin >> u >> v >> x;
			node* t = r;
			node* tmp = timkiem(t,u);
			if(tmp!=NULL){
				if(x=='L'){
					tmp = addNodel(v,tmp);
				}
				else if(x=='R'){
					tmp = addNoder(v,tmp);
				}
			}
			else{
				if(x=='L'){
					tmp = addHeadl(u,t);
					r = tmp;
				}
				else{
					tmp == addHeadr(u,t);
					r = tmp;
				}
			}
		}
		ans = 0;
		tong(r,'R');
		cout << ans << endl;
	}
	return 0;
}