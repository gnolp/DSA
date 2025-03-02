#include<bits/stdc++.h>

using namespace std;

struct H{
	int d,r;	
};

int main(){
	H hcn[3];
	bool ok = true;
	map<int,set<int>> mp;
	for(int i =0; i<3; i++){
		cin >> hcn[i].d >> hcn[i].r;
		if(hcn[i].d < hcn[i].r){
			hcn[i].d += hcn[i].r;
			hcn[i].r = hcn[i].d-hcn[i].r;
			hcn[i].d -= hcn[i].r;
		}
		mp[hcn[i].d].insert(i);
		mp[hcn[i].r].insert(i);
 	}
	
		int cs = 0;
		int t=-1;
		vector<int> v;
		for(pair<int,set<int>> x:mp){
			if(x.second.size()==3){
				cs = 1;
				t = (t==-1)? x.first:max(t,x.first);
			}
			else if(x.second.size()==2 and cs != 1){
				cs = 2;
				v.push_back(x.first);
			}
		}
//		cout <<"cs " << cs << endl;
		if(cs ==0){
			cout << 0;
		}
		else if (cs==1){
			int temp = 0;
			for(int i = 0; i<3; i++){
				if( hcn[i].d==t){
					temp += hcn[i].r;
				}
				else{
					temp += hcn[i].d;
				}
			}
			if(temp == t){
				cout << t;
			}
			else{
				for(int i = 0; i<3; i++){
					if(hcn[i].d == t and temp - hcn[i].r == hcn[i].r){
						cout << hcn[i].r;
						break;
					}
					else if(hcn[i].r == t and temp - hcn[i].d == hcn[i].d){
						cout << hcn[i].d;
						break;
					}
				}
			}
		}
		else if(cs == 2){
			ok = false;
			for(auto i :v){
				int s = 3;
				int s1 = 0;
				long long temp = 0;
				for(int x:mp[i]){
					s1 += x;
					temp += (hcn[x].d==i) ? hcn[x].r:hcn[x].d;
				}
				int j = s-s1;
//				cout << s1 <<" " << j <<" " << temp  <<" " << i<< endl;
				if(hcn[j].d == temp){
					if(hcn[j].r + i == temp){
						cout << temp;
						ok = true;
						break;
					}
				}
				else if(hcn[j].r == temp){
					if(hcn[j].d + i == temp){
						cout << temp;
						ok = true;
						break;
					}
				}
			}
			if(not ok){
				cout << 0;
			}
		}
}