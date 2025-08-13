#include<bits/stdc++.h>

using namespace std;
const int MAX = 6003;
int dp[MAX][MAX];
int a,b,c,d,e;

int getSum(int x1, int y1, int x2, int y2){
	return dp[x2][y2] - dp[x1-1][y2] - dp[x2][y1-1] + dp[x1-1][y1-1];
}

bool check(int len) {
    for (int i = 1; i + len - 1 <= a; ++i) {
        for (int j = 1; j + len - 1 <= b; ++j) {
            int x1 = i, y1 = j;
            int x2 = i + len - 1, y2 = j + len - 1;
            if (getSum(x1, y1, x2, y2) <= e)
                return true;
        }
    }
    return false;
}

int main(){	
	cin >> a>> b >> c>> d>> e;
	for(int i =0; i<c; i++){
		int x,y;
		cin >> x >> y;
		dp[x][y] = 1;
	}
	for(int i = 1; i<= a; i++){
		for(int j = 1; j<= b;  j++){
			dp[i][j] = dp[i][j-1] + dp[i-1][j] + dp[i][j] - dp[i-1][j-1];
		}
	}
	int ans = 0;
	int mx = (min(a,b)+d-1)/d;
	int l = 1, r = mx;
	while(l<=r){
		int m = (l+r)/2;
		if(check(m*d)){
			ans = m;
			l = m+1;
		}
		else{
			r = m-1;
		}
	}
	cout << (ans)*d;
}