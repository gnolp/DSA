#include<bits/stdc++.h>

using namespace std;

// 5
// 30 40 10 20 50
//1
//1
//2
//3
// tim node p co node con > data;


struct node{
	int data;
	node* r;
	node* l;
};

node* created(int x){
	node* p = new node;
	p->data = x;
	p->r = NULL;
	p->l=NULL;
	return p;
}

node* pa[1005];
int cnt;
void ktra(node* root,int x){
//	cout << cnt << endl;
	if(root->l==NULL and root->r==NULL){
		return;
	}
	if(root->l!=NULL){
		if(root->l->data > x) cnt++;
		ktra(root->l,x);
	}
	if(root->r!=NULL){
		if(root->r->data > x) cnt++;
		ktra(root->r,x);
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i<n; i++){
		cin >> a[i];
		pa[i] = created(a[i]);
	}
	int temp;
	for(int i =1; i<n; i++){
		cin >> temp;
		if(pa[temp-1]->l==NULL){
			pa[temp-1]->l = pa[i]; 
		}
		else{
			pa[temp-1]->r=pa[i];
		}
	}
	for(int i= 0;i<n; i++){
		ktra(pa[i],pa[i]->data);
		cout << cnt << endl;
		cnt =0;
	}
	//cout << pa[0]->l->data << " " << pa[0]->r->data << endl;
	return 0;
}