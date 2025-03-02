#include<bits/stdc++.h>

using namespace std;
int a[1001][1001];
int s;
int tmp;
bool cot[101], cc[101], cp[101];
void Try(int i){
	for(int j =1; j <=8; j++){
		if(!cot[j] && !cc[i-j+8] && !cp[i+j-1]){
			cot[j]= 1;
			cc[i-j+8] = 1;
			cp[i+j-1] = 1;
			tmp+= a[i][j];
			if(i==8){
				s = max(s,tmp);
			}
			else Try(i+1);
			cot[j]= 0;
			cc[i-j+8] = 0;
			cp[i+j-1] = 0;
			tmp -= a[i][j];
		}
	}
}
int main(){
	int test; cin >> test;
	for(int t = 1; t <=test; t++){
		s =0 ;
		tmp = 0;
		for(int i = 1; i <= 8; i++){
			for(int j = 1; j <=8;j++){
				cin >> a[i][j];
			}
		}
		Try(1);
		cout <<"Test " << t<<": " << s << endl;
	}
	return 0;
}