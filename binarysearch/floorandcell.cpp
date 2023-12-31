#include<bits/stdc++.h>
using namespace std;
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
for(int i=0;i<n;i++){
	if(a[i]==x){
		pair<int,int>x(a[i],a[i]);
		return x;
	}

}

if(a[0]>=x){
	pair<int,int>x(-1,a[0]);
	return x;
}

if(a[n-1]<=x){
	pair<int,int>x(a[n-1],-1);
	return x;
}
for(int i=0;i<n-1;i++){
int j=i+1;
if(a[i]<x&&a[j]>x){
	pair<int,int>x(a[i],a[j]);
	return x;
}
}
}
int main(){
      int n = 5;
    vector<int> a = {1, 1, 2, 2, 14};
    int x = 2;

    pair<int, int> d = getFloorAndCeil(a, n, x);

    cout   << d.first  << d.second << endl;
}