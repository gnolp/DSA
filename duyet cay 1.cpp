#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node* r;
	node* l;
};
int in[1005];
int pre[1005];
int check[1005];
int n;
int search(int i,int l, int r){
	for(int j = l; j<r; j++){
		if(in[j]==pre[i]){
			return j;
		}
	}
	return -1;
}

node* makenode(int x){
	node* p = new node;
	p->data = x;
	p->r = NULL;
	p->l = NULL;
	return p;
}
int i;

// 	1

// 6
// 1  2  4  5  3  6
// 4  2  5  1  3  6

node* makeTree(int l, int r){
	if(search(i,l,r)!=-1){
		node* p = makenode(pre[i]);
		int j = search(i,l,r);
		check[j] = 1;
		if(j==0 or j==n-1 or ( check[j-1]==1 and check[j+1]==1) ){
			return p;
		}
		if(check[j-1]==0){
			i++;
			node* tmp = makeTree(l,j);
			p->l= tmp;
		}
		if(check[j+1]==0){
			i++;
			node* tmp = makeTree(j+1,r);
			p->r = tmp;
		}
		return p;
	}
}

void prin(node* root){
	if(root->l!=NULL){
		prin(root->l);
	}
	if(root->r!=NULL){
		prin(root->r);
	}
	cout << root->data <<" ";
}

int main(){
	int test; cin >> test;
	while(test--){
		memset(in,0,sizeof(in));
		memset(pre,0,sizeof(pre));
		memset(check,0,sizeof(check));
		cin >> n;
		for(int i = 0; i<n; i++) cin >> in[i];
		for(int i =0; i<n; i++) cin >> pre[i];
		i=0;
		node* root = makeTree(0,n);
		prin(root);
		cout << endl;
		//cout << root->r->r->data;
	}
}