#include<bits/stdc++.h>

using namespace std;

int main(){
	set<double> st;
	int n; cin >> n;
	double a,b,c;
	bool ok = true;
	while(n--){
		cin >> a>>b >>c;
		if(a==0 and b==0 and c==0){
			ok = false;
		}
		else if(a==0 and b!=0 and ok){
			st.insert((double)(0-c)/b);
		}
		else if(a!=0 and ok){
			double delta = b*b-4*a*c;
			if(delta ==0){
				st.insert((double)(0-b)*1.0/(2*a));
			}
			else if(delta > 0){
				st.insert( (double)(sqrt(delta) - b)/(2*a) );
				st.insert( (double)(0-(sqrt(delta)+b))/(2*a) );
			}
		}
	}
	if (ok)
		cout << st.size();
	else cout << -1;
}