#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& arr, int m)
{
	int low=0;
	int high=arr.size()-1;
	 
	while(low<=high){
		int mid=low+(high-low)/2;
 
 if(arr[mid]==m){
	 return mid;
 }
if(arr[0]>m){
	low=0;
	break;
}
		if(arr[mid]<m){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
		
	}
return low;
}
int main(){
    vector<int>a={1,2,3,4};

  cout<<  searchInsert(a,2);

}