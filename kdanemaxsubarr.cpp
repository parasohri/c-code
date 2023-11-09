#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;//kdane maximum subarray sum
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}//Longest Subarray with sum K | [Postives and Negatives]
int sum=0;
int fin=0;
int r;
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
        sum+=arr[j];
         if(sum>fin){
        fin=max(sum,fin);

    }
    }
   
}
cout<<fin;


}