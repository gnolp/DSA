#include<bits/stdc++.h>

using namespace std;

int main(){
	set<pair<int,int>> s;
	int x = 0,y =0;
	s.insert(make_pair(x,y));
	int k; cin >> k;
	int n; cin >> n;
	for(int i =0; i<k; i++){
		for(int j = 0; j<k; j++){
			s.insert(make_pair(i,j));
		}
	}
	while(n--){
		char h; cin >> h;
		int a; cin >> a;
		if(h=='W'){
			for(int step = 1; step<=a; step++){
				for(int i = 0; i<k; i++){
					for(int j = 0; j<k; j++){
						s.insert({x+i-step,y+j});
					}
				}
			}
			x-=a;
		}
		else if(h=='S'){
			for(int step = 1; step<=a; step++){
				for(int i = 0; i<k; i++){
					for(int j = 0; j<k; j++){
						s.insert({x+i,y+j-step});
					}
				}
			}
			y-=a;
		}
		else if(h=='N'){
			for(int step = 1; step<=a; step++){
				for(int i = 0; i<k; i++){
					for(int j = 0; j<k; j++){
						s.insert({x+i,y+j+step});
					}
				}
			}
			y+=a;
		}
		else{
			for(int step = 1; step<=a; step++){
				for(int i = 0; i<k; i++){
					for(int j = 0; j<k; j++){
						s.insert({x+i+step,y+j});
					}
				}
			}
			x+=a;
		}
		
	}
	cout << s.size();
}