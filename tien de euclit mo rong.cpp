#include<bits/stdc++.h>

using namespace std;
// giai pt ax+by =gcd(a,b)
//	ax+by = g;
// bx+ (a%b)y=g
// bx + (a-a/b *b) y = g;
//...
// a*y1 + b(x1-a/b *y1) = g;
// x = y1;
// y = x1 - a/b *y1.
int x,y,g;

void extended_gcd(int a,int b){
	if(b==0){
		x=1;
		y=0;
		a=g;
	}
	else{
		extended_gcd(b,a%b);
	}
	int tmp = x;
	x = y;
	y = tmp - a/b*y;
}


int main(){
	
}