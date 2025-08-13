#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node* next;
};

void push_head(Node*&head, Node*& tail, int value){
	Node* newNode = new Node {value,head};
	head = newNode;
	if(tail == nullptr){
		tail = newNode;
	}
}
void push_back(Node*& head, Node*& tail, int value){
	Node* newNode = new Node {value,nullptr};
	if(tail == nullptr){
		head = tail = newNode;
	}
	else{
		tail->next = newNode;
		tail = newNode;
	}
}
void print(Node* head){
	while(head!=nullptr){
		cout << head->data <<" ";
		head = head->next;
	}
}
void rev(Node*& head){
	Node* prev = nullptr;
	Node* cur = head;
	Node* next = nullptr;
	while(cur != nullptr){
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	head = prev;
}
int main(){
	int n; cin >> n;
	int a[n];
	Node* head = nullptr;
	Node* tail = nullptr;
	for(int i =0; i<n; i++){
		cin >> a[i];
		if(i%2==0){
			push_head(head,tail,a[i]);
		} else push_back(head,tail,a[i]);
	}
	if(n%2==0) rev(head);
	print(head);
}