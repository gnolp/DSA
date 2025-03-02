#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n;
	int Min=1e9,Max=-1e9;
	while( cin >> n ){
		if(n>Max) Max = n;
		else{
			if(n<Min) Min = n;
		}
	}
	cout << Max <<" " << Min;
}