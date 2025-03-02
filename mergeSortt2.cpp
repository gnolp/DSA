#include<bits/stdc++.h>

using namespace std;

long long merge(int a[],int l,int mid, int r){
	vector<int> v1(a+l,a+mid+1);
	vector<int> v2(a+mid+1,a+r+1);
	int i =0, j = 0;
	long long cnt = 0;
	while(i<v1.size() and j < v2.size()){
		if(v1[i] <= v2[j]){
			a[l++] = v1[i];
			i++;
		}
		else{
			
			a[l++] = v2[j];
			j++;
			cnt+= v1.size()-i;
		}
	}
	while(j<v2.size()){
		a[l++] = v2[j++];
	}
	while(i<v1.size()){
		a[l++] = v1[i++];
	}
	return cnt;
}

long long  mergeSort(int a[],int l,int r){
	long long dem = 0;
	if(l<r){
		int mid = (l+r)/2;
		dem += mergeSort(a,l,mid);
		dem += mergeSort(a,mid+1,r);
		dem += merge(a,l,mid,r);
	}
	return dem;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n;
		cin >> n;
		int a[n];
		for(int i =0; i<n; i++) cin >> a[i];
		cout << mergeSort(a,0,n-1) << endl;	
	}
	return 0;
}