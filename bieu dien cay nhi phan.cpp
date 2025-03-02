#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node* l;
	node* r;
};

node* created(int x){
	node* p = new node;
	p->data = x;
	p->l =NULL;
	p->r = NULL;
	return p;
}
int cnt;
string a[100005];

void in(node* root){
	if(root->r!=NULL){
		in(root->r);
	}
	cout << root->data <<" ";
	if(root->l!=NULL){
		in(root->l);
	}
}

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		string s;
		getline(cin,s);
		int n = s.length();
		string tmp ="";
		cnt = 1;
		for(int i =0; i<n; i++){
			if(s[i]!=' '){
				tmp += s[i];
			}	
			else{
				a[cnt] = tmp;
				cnt++;
				tmp ="";
			}
//			cout << tmp <<" ";
		}
		a[cnt] = tmp;
		for(int i =1; i<=cnt; i++){
			cout << a[i]<<" ";
		}
		cout << endl;
		queue<node*> q;
		int x = stoi(a[1]);
		cout << x << endl;
		node* root = created(x);
		q.push(root);
		int i = 1;
		while(!q.empty()){
			if(i>=cnt) break;
			node* p = q.front();
			q.pop();
			i++;
			if(a[i]!="N"){
				x = stoi(a[i]);
				node* tmp = created(x);
				p->l = tmp;
				q.push(tmp);
			}
			i++;
			if(a[i]!="N"){
				x = stoi(a[i]);
				node* tmp = created(x);
				p->r = tmp;
				q.push(tmp);
			}
//			cout << i <<".";
		}
		in(root);
	}
}