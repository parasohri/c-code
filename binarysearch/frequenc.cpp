
// Problem statement
// You have been given a sorted array/list of integers 'arr' of size 'n' and an integer 'x'.



// Find the total number of occurrences of 'x' in the array/list.



// Example:
// Input: 'n' = 7, 'x' = 3
// 'arr' = [1, 1, 1, 2, 2, 3, 3]

// Output: 2

// Explanation: Total occurrences of '3' in the array 'arr' is 2.
#include<bits/stdc++.h>
using namespace std;

 int count(vector<int>& arr, int n, int x) {
	int low=0;
	int high=-1;
	int left=0;
	int right=n-1;
while(left<=right){
	int mid=left+(right-left)/2;
	if(arr[mid]==x){
		while(arr[mid]==x){
			low=mid;
			mid--;
		}
		break;
	}
	else if(arr[mid]<x){
		left=mid+1;

	}
	else{
		right=mid-1;
	}
	
	}
	while(left<=right){
	int mid=left+(right-left)/2;
	if(arr[mid]==x){
		while(arr[mid]==x){
			high=mid;
			mid++;
		}
		break;
	}
	else if(arr[mid]<x){
		left=mid+1;

	}
	else{
		right=mid-1;
	}
	
	}
	return (high-low+1);
}

int main(){
    vector<int>a={1,2,2,2,3,4,4};
    int n=7;
    int x=2;
   cout<< count(a,  n,  x);

}
