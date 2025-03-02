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


void in(node *p){
	queue<node> q;
	q.push(*p);
	while(!q.empty()){
		node tmp = q.front();
		q.pop();
		cout << tmp.data <<" ";
		
		if(tmp.l!=NULL){
			q.push(*(tmp.l));
//			cout << "a" << endl;
		}
		if(tmp.r!=NULL){
			q.push(*(tmp.r));
//			cout << "b" << endl;
		}
	}
}
void spiral(node* p){
	bool ok = 0;
	queue<node*> q;
	stack<node*> st;
	cout << p->data <<" ";
	q.push(p);
	while(1){
		if(q.empty() and st.empty()) return;
		while(!st.empty()){
			q.push(st.top());
			st.pop();
			
		}
		while(!q.empty()){
			node* tmp = q.front();
			q.pop();
			if(!ok){
				if(tmp->l!=NULL){
					st.push(tmp->l);
					cout << tmp->l->data <<" ";
				}
				if(tmp->r!=NULL){
					st.push(tmp->r);
					cout << tmp->r->data <<" ";
				}
								
			}
			else{
				if(tmp->r!=NULL){
					st.push(tmp->r);
					cout << tmp->r->data <<" ";
				}
				if(tmp->l!=NULL){
					st.push(tmp->l);
					cout << tmp->l->data <<" ";
				}	
			}
		}
		ok = !ok;
	}
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
//				cout << u << ";" << endl;
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
//		cout << r->data << endl;
//		in(r);
//		cout << endl;
		spiral(r);
		cout << endl;
	}
}