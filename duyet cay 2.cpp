#include<bits/stdc++.h>

using namespace std;

int n;
int lev[1005];
int in[1005];

struct node{
	int data;
	node* l;
	node* r;
	node* pa;
};

node* created(int x){
	node* p = new node;
	p->data = x;
	p->r = NULL;
	p->l =NULL;
	p->pa = p;
	return p;
}

node* check[1005];

int search(int j){
	for(int i =1; i<=n; i++){
		if(in[i]==lev[j]) return i;
	}
	return 0;
}

void update(node* cha, node* con){
	if(con->r != NULL){
		update(cha,con->r);
	}
	if(con->l !=NULL){
		update(cha,con->l);
	}
	con->pa = cha;
	return;
}

void prin(node* root){
	if(root->l!=NULL){
		prin(root->l);
	}
	if(root->r!=NULL) prin(root->r);
	cout << root->data << " ";
}

int main(){
	int test; cin >> test;
	while(test--){
		cin >>n ;
		memset(lev,0,sizeof(lev));
		memset(in,0,sizeof(in));
		memset(check,NULL,sizeof(check));
		for(int i = 1; i<=n; i++){
			cin >> in[i];
		}
		
		int j;
		for(int i =1; i<=n; i++) cin >> lev[i];
		for(int i = n; i>0; i--){
		//	cout << lev[i] <<".";
			j = search(i);
			check[j] = created(in[j]);
			//cout << j <<" " << check[j]->data << endl;
			if((check[j-1] != NULL)){
				check[j]->l = check[j-1]->pa;	
				update(check[j],check[j-1]->pa);
			}
			if(check[j+1]!=NULL){
				check[j]->r = check[j+1]->pa;
				update(check[j],check[j+1]->pa);
			}
		}
		prin(check[j]);
		cout << endl;
	}
}