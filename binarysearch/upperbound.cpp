#include<bits/stdc++.h>
using namespace std;
 int upperbound(vector<int>arr, int x, int n){
	  int low = 0;
    int high = n;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > x) {
            high = mid;
        } else if (arr[mid] <= x) {
             
            low = mid + 1;
        }
    }

    return low;
	}


int main(){
    vector<int>arr={1,2,3,4,5};
int result=upperbound(arr,3,5);
cout<<result;
}
  