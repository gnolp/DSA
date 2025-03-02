#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >>n;
    int a[n];
    for(int i =0; i <n; i++){
        cin >> a[i];
    }
    queue<int> q;
    set<int> sdt;
    int k; cin >> k;
    for(int i =0; i <n; i++){
        if(q.size()<k){
            if(sdt.find(a[i])== sdt.end()){
                q.push(a[i]);
                sdt.insert(a[i]);
            }
        }
        else{
            if(sdt.find(a[i])== sdt.end()){
                sdt.erase(sdt.find(q.front()));
                q.pop();
                q.push(a[i]);
                sdt.insert(a[i]);
            }
        }
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}